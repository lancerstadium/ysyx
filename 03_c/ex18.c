#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/**
 * 附加题：
 * 1. 用十六进制编辑器打开`ex18`，找到函数起始处十六进制代码序列：`f30f1efa554889e5897dfc`
 * 2. 修改十六进制文件，运行：报错`[1] 6576 segmentation fault`
 * 3. 将错误的函数传给`compare_cb`：编译器警告 Warning 函数类型不同，并进行了强制转换：
 *      `note: expected ‘compare_cb’ {aka ‘int (*)(int,  int)’} but argument is of type ‘int (*)(char,  float)’`
 * 4. 将`NULL`传给`compare_cb`，报错`segmentation fault`，Valgrind 报错： 
 *      `Jump to the invalid address stated on the next line`
 * 5. 修改`test_sorting`使它接收任意的排序函数和排序函数的比较回调`insert_sort`
 */

/** Our old friend die from ex17. */
void die(const char *message)
{
    if(errno) {
        perror(message);
    } else {
        printf("ERROR: %s\n", message);
    }

    exit(1);
}

// a typedef creates a fake type, in this
// case for a function pointer
typedef int (*compare_cb)(int a, int b);
typedef int* (*sort_cb)(int *numbers, int count, compare_cb cmp);

/**
 * A classic bubble sort function that uses the
 * compare_cb to do the sorting.
 */
int *bubble_sort(int *numbers, int count, compare_cb cmp)
{
    int temp = 0;
    int i = 0;
    int j = 0;
    int *target = malloc(count * sizeof(int));

    if(!target) die("Memory error.");

    memcpy(target, numbers, count * sizeof(int));

    for(i = 0; i < count; i++) {
        for(j = 0; j < count - 1; j++) {
            if(cmp(target[j], target[j+1]) > 0) {
                temp = target[j+1];
                target[j+1] = target[j];
                target[j] = temp;
            }
        }
    }

    return target;
}

// 插入排序
int *insert_sort(int *numbers, int count, compare_cb cmp)
{
    int temp = 0;
    int i = 0;
    int j = 0;
    int *target = malloc(count * sizeof(int));

    if(!target) die("Memory error.");

    memcpy(target, numbers, count * sizeof(int));

    for(i = 1; i < count; i++) {            // i start at 1
        temp = target[i];                   // get the next element
        j = i - 1;                          // j start at i - 1
        while(j >= 0 && cmp(target[j], temp) > 0) { // while j >= 0 and target[j] > temp
            target[j+1] = target[j];        // move
            j--;                            // decrement
        }
        target[j+1] = temp;
    }

    return target;
}


// 升序排列
int sorted_order(int a, int b)
{
    return a - b;
}
// 降序排列
int reverse_order(int a, int b)
{
    return b - a;
}
// 奇怪的排列
int strange_order(int a, int b)
{
    if(a == 0 || b == 0) {
        return 0;
    } else {
        return a % b;
    }
}

// 错误函数：类型不同
int wrong_order(int a, int b, char c) {
    return a - b;
}


/**
 * Used to test that we are sorting things correctly
 * by doing the sort and printing it out.
 */
// void test_sorting(int *numbers, int count, compare_cb cmp)
void test_sorting(int *numbers, int count, compare_cb cmp, sort_cb sort)
{
    int i = 0;
    int *sorted = sort(numbers, count, cmp);

    if(!sorted) die("Failed to sort as requested.");

    for(i = 0; i < count; i++) {
        printf("%d ", sorted[i]);
    }
    printf("\n");
	
    // 获取函数地址
	unsigned char *data = (unsigned char *) cmp;
	for(i = 0; i < 25; i++){
		printf("%02x:", data[i]);
	}
	printf("\n");
    free(sorted);
}


int main(int argc, char *argv[])
{
    if(argc < 2) die("USAGE: ex18 4 3 1 5 6");

    int count = argc - 1;
    int i = 0;
    char **inputs = argv + 1;

    int *numbers = malloc(count * sizeof(int));
    if(!numbers) die("Memory error.");

    for(i = 0; i < count; i++) {
        numbers[i] = atoi(inputs[i]);
    }

    test_sorting(numbers, count, sorted_order, bubble_sort);
    test_sorting(numbers, count, sorted_order, insert_sort);
    test_sorting(numbers, count, reverse_order, bubble_sort);
    test_sorting(numbers, count, strange_order, bubble_sort);
    // 错误函数!!!
    // test_sorting(numbers, count, wrong_order, bubble_sort);

    free(numbers);

    return 0;
}
