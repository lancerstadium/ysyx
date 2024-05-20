
header:
	find . -name "*.[ch]" | xargs cat | grep "^#include" | sort | uniq

clock:
	watch -t -n 1 "echo -n 'LancerStadium | '; \
		date; echo 'ysyx learning ...'"

cpu:
	watch -n 1 "cat /proc/cpuinfo | grep MHz | awk '{print \$1 NR \$3 \$4 \$2}'"

rv32:
	riscv64-linux-gnu-gcc-12 -march=rv32i -mabi=ilp32 --static -nostdlib -ffreestanding -Wl,-Ttext=0 -O2 -o prog prog.c


ob32:
	riscv64-linux-gnu-objdump -M no-aliases -d ./prog

bin:
	riscv64-linux-gnu-objcopy -j .text -O binary prog prog.bin

test:
	make emu
	make rv32
	make bin
	./emu prog.bin

clean:
	rm -rf a
	rm -rf b

.PHONY: header clean
