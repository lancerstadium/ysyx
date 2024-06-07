#undef NDEBUG
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <lcthw/dbg.h>
#include <lcthw/ringbuffer.h>

// 附加题：
// 创建RingBuffer的替代版本，使用POSIX的技巧并为其执行单元测试。
// 为二者添加一个性能对比测试，通过带有随机数据和随机读写操作的模糊测试来比较两个版本。确保你你对每个版本进行了相同的操作，便于你在操作之间比较二者。
// 使用callgrind 和 cachegrind比较二者的性能。

RingBuffer *RingBuffer_create(int length)
{
    RingBuffer *buffer = calloc(1, sizeof(RingBuffer));
    buffer->length  = length + 1;
    buffer->start = 0;
    buffer->end = 0;
    buffer->buffer = calloc(buffer->length, 1);

    return buffer;
}

void RingBuffer_destroy(RingBuffer *buffer)
{
    if(buffer) {
        free(buffer->buffer);
        free(buffer);
    }
}

int RingBuffer_write(RingBuffer *buffer, char *data, int length)
{
    if(RingBuffer_available_data(buffer) == 0) {
        buffer->start = buffer->end = 0;
    }

    check(length <= RingBuffer_available_space(buffer),
            "Not enough space: %d request, %d available",
            RingBuffer_available_data(buffer), length);

    void *result = memcpy(RingBuffer_ends_at(buffer), data, length);
    check(result != NULL, "Failed to write data into buffer.");

    RingBuffer_commit_write(buffer, length);

    return length;
error:
    return -1;
}

int RingBuffer_read(RingBuffer *buffer, char *target, int amount)
{
    check_debug(amount <= RingBuffer_available_data(buffer),
            "Not enough in the buffer: has %d, needs %d",
            RingBuffer_available_data(buffer), amount);

    void *result = memcpy(target, RingBuffer_starts_at(buffer), amount);
    check(result != NULL, "Failed to write buffer into data.");

    RingBuffer_commit_read(buffer, amount);

    if(buffer->end == buffer->start) {
        buffer->start = buffer->end = 0;
    }

    return amount;
error:
    return -1;
}

bstring RingBuffer_gets(RingBuffer *buffer, int amount)
{
    check(amount > 0, "Need more than 0 for gets, you gave: %d ", amount);
    check_debug(amount <= RingBuffer_available_data(buffer),
            "Not enough in the buffer.");

    bstring result = blk2bstr(RingBuffer_starts_at(buffer), amount);
    check(result != NULL, "Failed to create gets result.");
    check(blength(result) == amount, "Wrong result length.");

    RingBuffer_commit_read(buffer, amount);
    assert(RingBuffer_available_data(buffer) >= 0 && "Error in read commit.");

    return result;
error:
    return NULL;
}