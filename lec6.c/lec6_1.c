#include<stdio.h>

void swap(int* x,  int* y);

int mian(){
    int a = 5;
    int b = 3;

    printf("a: %d // %p\n", a, &a);
    printf("b: %d // %p\n", b, &b);

    swap(&a, &b);
    printf("-------------------\n");
    
    printf("a: %d // %p\n", a, &a);
    printf("b: %d // %p\n", b, &b);

    return 0;
}

void swap(int* x,  int* y){
    int temp = *x; //5
    *x = *y; //3
    *y = temp; //3
}