/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
use 5c  OPT(n-5) + 1
 * use 4c  OPT(n-4) + 1
 * use 1c  OPT(n-1) + 1




int* OPT5 (int *denomination, int n, int* result, int index){
    if(n == 1){
        *(result+index) = 1;
        index++;
        return result;
    }
    else if(n == 2){
        *(result+index) = 1;
        index++;
        return OPT5(denomination,n-1,result,index++);
    }
    else if(n == 3){
        *(result+index) = 1;
        index++;
        return OPT5(denomination,n-1,result,index++);
    }
    else if(n == 4){
        *(result+index) = 4;
        index++;
        return result;
    }
    else if(n == 5){
        *(result+index) = 5;
        index++;
        return result;
    }
    else{
        result[index] = 5;
        index++;
        return OPT5(denomination, n-5,result,index);
    }

}


int* OPT4 (int *denomination, int n, int* result, int index){
    if(n == 1){
        *(result+index) = 1;
        index++;
        return result;
    }
    else if(n == 2){
        *(result+index) = 1;
        index++;
        return OPT4(denomination,n-1,result,index++);
    }
    else if(n == 3){
        *(result+index) = 1;
        index++;
        return OPT4(denomination,n-1,result,index++);
    }
    else if(n == 4){
        *(result+index) = 4;
        index++;
        return result;
    }
    else if(n == 5){
        *(result+index) = 5;
        index++;
        return result;
    }
    else{
        result[index] = 4;
        index++;
        return OPT4(denomination, n-4,result,index);
    }

}

int* OPT1 (int *denomination, int n, int* result, int index){
    if(n == 1){
        *(result+index) = 1;
        index++;
        return result;
    }
    else if(n == 2){
        *(result+index) = 1;
        index++;
        return OPT1(denomination,n-1,result,index++);
    }
    else if(n == 3){
        *(result+index) = 1;
        index++;
        return OPT1(denomination,n-1,result,index++);
    }
    else if(n == 4){
        *(result+index) = 4;
        index++;
        return result;
    }
    else if(n == 5){
        *(result+index) = 5;
        index++;
        return result;
    }
    else{
        result[index] = 1;
        index++;
        return OPT1(denomination, n-1,result,index);
    }

}


int main(){
    int b[10] = {1,4,5};
    int *a;
    int c[20];
    int  x = 0;
    a = OPT5(b,12,c,0);
    for (int i = 0; i < 10; ++i) {
        if(a[i]== 1 || a[i] == 4 ||a[i] == 5){
            x++;
            printf("%d ",a[i]);
        } else
            break;

    }

    printf("\n");
    int *d;
    int e[20];
    int y = 0;
    d = OPT4(b,12,e,0);

    for (int i = 0; i < 10; ++i) {
        if(d[i]== 1 || d[i] == 4 ||d[i] == 5){
            y++;
            printf("%d ",d[i]);
        } else
            break;


    }
    printf("\n");

    int *f;
    int g[20];
    int z = 0;
    f = OPT1(b,12,g,0);
    for (int i = 0; i < 10; ++i) {
        if(f[i]== 1 || f[i] == 4 || f[i] == 5){
            z++;
            printf("%d ",f[i]);
        } else
            break;

    }
    printf("\n");
    int min = x;
    if(y<x){
        min = y;
        if(z<y){
            min = z;
        }
    }
    if(z<x){
        min = z;
        if(y<z){
            min = y;
        }
    }
    if(min == x){
        for (int i = 0; i < 10; ++i) {
            if(a[i]== 1 || a[i] == 4 ||a[i] == 5){
                x++;
                printf("%d ",a[i]);
            } else
                break;

        }
    }
    if(min == y){
        for (int i = 0; i < 10; ++i) {
            if(d[i]== 1 || d[i] == 4 ||d[i] == 5){
                y++;
                printf("%d ",d[i]);
            } else
                break;


        }
    }
    if(min == z){
        for (int i = 0; i < 10; ++i) {
            if(f[i]== 1 || f[i] == 4 || f[i] == 5){
                z++;
                printf("%d ",f[i]);
            } else
                break;

        }
    }


}



#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
typedef struct heap{
    int *arr;
    int size;
    int capacity;
} heap;

void create_heap(heap **h, int capacity){
    (*h)->arr = (int *)malloc(sizeof(int) * capacity);
    (*h-)>size = 0;
    (*h)->capacity = capacity;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insert(heap *h, int val){
    if(h->size == h->capacity){
        h->arr = (int *)realloc(h->arr, sizeof(int) * h->capacity * 2);
        h->capacity *= 2;
    }
    h->arr[h->size+1] = val;
    h->size++;
    int i = h->size - 1;
    while(i >= 0 ){
        if(val<h->arr[i-1]){
            swap(&h->arr[i], &h->arr[i-1]);
            i--;
        }
        if(val<h->arr[i/2]){
            swap(&h->arr[i], &h->arr[i / 2]);
            i = i / 2;
        } else
            break;

    }
}


int extract_min(heap *h)
{
    if(h->size == 0){
        return (int) NULL;
    }
    int min = h->arr[0];
    h->arr[0] = h->arr[h->size-1];
    free(&h->arr[h->size-1]);
    h->size--;
    int root = 0;
    if(h->size == 0){
        return min;
    }
    while(root < h->size-2) {
        int value;
        value = MIN(h->arr[root + 1], h->arr[root + 2]);
        if((value == h->arr[root + 1]) && ( h->arr[root]>h->arr[root + 1]) ){
            swap(&h->arr[root + 1],&h->arr[root]);
        }
        if((value == h->arr[root + 2]) && ( h->arr[root]>h->arr[root + 2]) ){
            swap(&h->arr[root + 2],&h->arr[root]);
        }
        else
            break;
        if(root == 0){
            root ++;
        } else
            root*=2;
    }
    return min;
}
*/