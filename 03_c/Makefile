CFLAGS=-Wall -g

# 定义一个变量，用于存储第一个目标参数
FIRST_GOAL := $(firstword $(MAKECMDGOALS))
SECOND_GOAL := $(word 2, $(MAKECMDGOALS))
THIRD_GOAL := $(word 3, $(MAKECMDGOALS))

all:ex1 ex3 ex4

head:
	gcc -E ex1.c --verbose > /dev/null

lexer:
	clang -fsyntax-only -Xclang -dump-tokens $(SECOND_GOAL)

parser:
	clang -fsyntax-only -Xclang -ast-dump $(SECOND_GOAL)

analy:
	clang $(SECOND_GOAL) --analyze -Xanalyzer -analyzer-output=text

ir:
	clang -S -emit-llvm $(SECOND_GOAL)

opt0:
	clang -S -foptimization-record-file=- $(SECOND_GOAL)

opt1:
	clang -S -foptimization-record-file=- $(SECOND_GOAL) -O1

opt2:
	clang -S -foptimization-record-file=- $(SECOND_GOAL) -O2

optt:
	clang -S $(SECOND_GOAL) -ftime-report

gen:
	clang -S $(SECOND_GOAL)

gent:
	clang -S $(SECOND_GOAL) --target=$(THIRD_GOAL)

disasm:
	llvm-objdump -d $(SECOND_GOAL)

m64:
	clang -w -m64 $(SECOND_GOAL) && ./a.out

m32:
	clang -w -m32 $(SECOND_GOAL) && ./a.out

clean:
	rm -f ex1
	rm -f ex3
	rm -f ex4
