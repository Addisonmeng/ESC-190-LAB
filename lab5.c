/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct node{
    int data;
    struct node *next;
} node;


typedef struct LL{
    node *head;
    int size;
} LL;
//*p_n  **p_n

void create_node(node **p_n, int data)
{
    *p_n = (node*)malloc( sizeof(node));
    (*p_n)->next = NULL;
    (*p_n)->data = data;
}

// created a linked list that looks like data[0]->data[1]->data[2]->...->data[size-1]
void create_LL_from_data(LL **p_LL, int *data_arr, int size)
{
    (*p_LL) = (LL*)malloc(sizeof(LL));
    (*p_LL)->size = 0;
    node *cur = NULL;
    for(int i = 0; i < size; i++){
        node *n;
        create_node(&n, data_arr[i]); // n is a pointer to a node with data = data[i], next = NULL
        if(cur == NULL){
            (*p_LL)->head = n;
        }
        else{
            cur->next = n;
        }
        cur = n;
        (*p_LL)->size++;
    }
}


void LL_append(LL *my_list, int new_elem)
{
    node *cur = my_list->head;
    while(cur->next != NULL){
        cur = cur->next;
    }
    node *n;
    create_node(&n, new_elem);
    cur->next = n;
    my_list->size++;
}

void LL_insert(LL *my_list, int new_elem, int index)
{
    node *n;
    create_node(&n,new_elem);

    if(index == 0){
        n->next = my_list->head;
        my_list->head = n;
        my_list->size++;
    } else{
        node *cur = my_list->head;
        for (int i = 0; i < index; ++i) {
            cur = cur->next;
        }
        n->next = cur->next;
        cur->next = n;
        my_list->size++;
    }


    // TODO
    // Insert new_elem at index index in linked list my_list
}

void LL_delete(LL *my_list, int index)
{
    node *cur = my_list->head;
    if(index == 0){
        my_list->head = my_list->head->next;
        free(cur);
        my_list->size--;
    }

    else{
        for (int i = 0; i < index - 1 ; ++i) {
            cur = cur->next;
        }
        node *temp = cur->next;
        cur->next = cur->next->next;
        free(temp);
        my_list->size--;
    }
    // TODO
    // Delete element at index index in linked list my_list
}

void LL_free_all(LL *my_list)
{
    node *cur = my_list->head;
    while(cur != NULL){
        node *temp = cur;
        cur = cur->next;
        free(temp);
    }
    free(my_list);//为什么要有这个
    // TODO
    // Free all memory allocated for linked list my_list,
    // including all the nodes
}


int LL_get_rec(LL *my_list, int index)
{
    node *cur = my_list->head;
    for(int i = 0; i < index; i++){
        cur = cur->next;
    }
    return cur->data;

    // TODO
    // Return the element at index index in linked list my_list
    // Use recursion. you must not use for, while, or do-while loops
    // You should use a helper function
}

typedef struct ArrayList{
    int *data;
    int size;
    int capacity;
} ArrayList;

void create_AL_from_data(ArrayList **p_AL, int *data_arr, int size)
{
    (*p_AL) = (ArrayList*)malloc(sizeof(ArrayList));
    (*p_AL)->size = size;
    (*p_AL)->capacity = size;
    //(*p_AL)->data = (int*)malloc(sizeof(int) * size);（有必要吗）
    (*p_AL)->data = data_arr;
    // TODO
}

void AL_append(ArrayList *my_list, int new_elem)
{
    if(my_list->size == my_list->capacity){
        my_list->capacity *= 2;
        my_list->data = (int *) realloc(my_list->data,sizeof(int)*(my_list->capacity));
    }
    my_list->data[my_list->size] = new_elem;
    my_list->size++;
    // capacity 是data的长度， size是目前的长度


    // TODO
}

void AL_insert(ArrayList *my_list, int new_elem, int index)
{
    if(my_list->size == my_list->capacity){
        my_list->capacity *= 2;
        my_list->data = (int *) realloc(my_list->data,sizeof(int)*(my_list->capacity));
    }
    for (int i = my_list->size; i >= index; --i) {
        memmove(my_list->data + i + 1, my_list->data + i, sizeof(int));//如果多分配内存会咋样;
    }
    //memmove(my_list->data + index + 1, my_list->data + index, sizeof(int) * (my_list->size - index));
    my_list->data[index] = new_elem;
    my_list->size++;

    // TODO
}

void AL_delete(ArrayList *my_list, int index)
{

    memmove(my_list->data + index, my_list->data + index + 1, sizeof(int) * (my_list->size - index- 1));
    my_list->size--;
    // TODO
}

void AL_free(ArrayList *my_list)
{
    free(my_list);
    free(my_list->data);
    free(&(my_list->size));
    free(&(my_list->capacity));
    // TODO
}


int main()
{
    int data_arr[] = {1, 2, 3, 4, 5};
    LL *my_list;
    create_LL_from_data(&my_list, data_arr, 5);
    LL_append(my_list, 6);
    LL_insert(my_list,0,0);
    LL_delete(my_list,1);
    node *cur = my_list->head;
    while(cur != NULL){
        printf("%d\n", cur->data);
        cur = cur->next;
    }


    int a = LL_get_rec(my_list,3);
    printf("%d",a);
}
*/