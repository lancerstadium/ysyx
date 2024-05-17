#include <stdio.h>
int main(int argc, char *argv[], char *envp[]) {
	for(int i = 0; i < argc; i++) {
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	printf("env vars:\n");
	for (char **p = envp; *p != NULL; p++) {
		printf("%s\n", *p);
	}
}
