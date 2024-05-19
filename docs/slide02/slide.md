# C 语言学习

<hr>

> [LancerStadium](https://github.com/LancerStadium)


---


# 指针


----

## 未释放指针

`Valgrind` 检测到未释放指针：

![ex16 diff](./asserts/image01.png)

----


## 堆申请

```c
void Database_create(struct Connection *conn)
{
    int i = 0;

    for(i = 0; i < MAX_ROWS; i++) {
        // make a prototype to initialize it
        struct Address addr = {.id = i, .set = 0};
        // then just assign it
        conn->db->rows[i] = addr;
    }
}


```




---

# Thanks!