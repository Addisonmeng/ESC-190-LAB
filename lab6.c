/*
 *
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct que{
    int* data;
    int begin;
    int end;
    int capacity;
}que;


void create_que(que **p_que, int *data_arr, int capacity)
{
    (*p_que) = (que*)malloc(sizeof(que));
    (*p_que)->begin = 0;
    (*p_que)->end = capacity-1;
    (*p_que)->capacity = capacity;
    //(*p_que)->data = (int*)malloc(sizeof(int) * size);（有必要吗）
    (*p_que)->data = data_arr;
    // TODO
}

void enqueue(que *p_que, int new){
    if((p_que->end+1)%p_que->capacity == p_que->begin){
        p_que->capacity *= 2;
        p_que->data = (int *) realloc(p_que->data,sizeof(int)*(p_que->capacity));
        memmove(p_que->data + p_que->capacity/2,p_que->data,sizeof(int) * (p_que->end));
    }
    p_que->end = (p_que->end+1)%p_que->capacity;
    p_que->data[p_que->end] = new;
}

int dequeue(que *p_que){
    int value = p_que->data[p_que->begin];
    p_que->begin = (p_que->begin+1)%p_que->capacity;
    return value;
}
 */