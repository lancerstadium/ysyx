#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <assert.h>
#include <errno.h>
#include <string.h>

// Assert define
#define Assert(cond, format, ...) \
	do { \
		if (!(cond)) { \
			fprintf(stderr, "\e[31m" format "\e[0m\n", ## __VA_ARGS__); \
			assert(cond); \
		} \
	} while (0)

// Perror define
#define Perror(cond, format, ...) \
	Assert(cond, format ": %s", ## __VA_ARGS__, strerror(errno))

// RISC-V ISA
#define MSIZE 1024
#define OPC(inst) ((inst) & 0x7f)
#define FN3(inst) (((inst) >> 12) & 0x7)
#define RS1(inst) (((inst) >>15) & 0x1f)
#define RD(inst)  (((inst) >> 7) & 0x1f)
#define IMM_I(inst) ((((inst) >> 20) & 0x7ff) - (((inst) & 0x80000000) ? 4096 : 0))

uint32_t R[32], PC;
uint8_t M[MSIZE] = {
	0x13, 0x05, 0x00, 0x00,	// addi a0, zero, 0
	0x93, 0x05, 0x10, 0x04,	// addi a1, zero, 65
	0x73, 0x00, 0x10, 0x00,	// ebreak
	
	0x13, 0x05, 0x10, 0x00,	// addi a0, zero, 1
	0x93, 0x05, 0x00, 0x00,	// addi a1, zero, 0
	0x73, 0x00, 0x10, 0x00,	// ebreak
	
	0x6f, 0x00, 0x00, 0x00,	// jal zero, 18
};

// Emulator Status
bool halt = false;

// Emulator Execute
void inst_cycle() {
	// Fetch
	uint32_t inst = *(uint32_t *)&M[PC];
	// Decode & Execute
	if (OPC(inst) == 0x13) {
		switch (FN3(inst)) {
			case 0x0:	// addi
			R[RD(inst)] = R[RS1(inst)] + IMM_I(inst); break;
			case 0x4:  	// xori
			R[RD(inst)] = R[RS1(inst)] ^ IMM_I(inst); break; 
			case 0x6: 	// ori
			R[RD(inst)] = R[RS1(inst)] | IMM_I(inst); break;
			case 0x3:	// andi  
			R[RD(inst)] = R[RS1(inst)] & IMM_I(inst); break;
			default: 
			printf("Unsupported funct3 = %d", FN3(inst)); break;
		};
		R[0] = 0;						// R0 = 0
	} else if (inst == 0x00100073) {	// ebreak
		if (R[10] == 0) { putchar(R[11] & 0xff); }
		else if (R[10] == 1) { halt = true; }
		else { printf("Unsupported ebreak command.\n"); }
	} else { printf("Unsupported instuction.\n"); }
	PC += 4;
}

int main(int argc, char* argv[]) {
	R[0] = 0; PC = 0;
	Assert(argc >= 2, "Bin is need");
	FILE *fp = fopen(argv[1], "r");
	Perror(fp != NULL, "Fail to open %s", argv[1]);
	int ret = fseek(fp, 0, SEEK_END);
	Perror(ret != -1, "Fseek fail");
	long fsize = ftell(fp);
	Perror(fsize != -1, "Ftell fail");
	rewind(fp);
	Assert(fsize < MSIZE, "Bin >= %dB", MSIZE);
	ret = fread(M, 1, MSIZE, fp);
	Assert(ret == fsize, "Load fail");
	fclose(fp);
	while(!halt) { inst_cycle(); }
	return 0;
}
