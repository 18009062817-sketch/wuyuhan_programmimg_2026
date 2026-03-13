/*
#include<stdio.h>
int main(){
    int a=2;
    float a2=2.0;
    int b=3;
    float c=3.0;

    printf("a % b = %d\n", a % b);
    printf("a %%% c (c cast to int) = %d\n", a % (int)c);
    printf("a2 %%% b (a2 cast to int) = %d\n", (int)a2 % (int)b);
    
    
    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int b=2;
    int a;

    a=b;
    //printf("a = %d, b: %d\n", a, b);
    
    a+=2;
    printf("a = %d\n", a);
    return 0;
}
*/

#include<stdio.h>
int main(){
    int a=3;
    a++;  //a=a+1; a+=1;
    printf("a: %d\n", a);  //a=4
    printf("a: %d\n", ++a); //a=5
    printf("a: %d\n", a++);//a=5, but after this line a=6
    printf("a: %d\n", a);//a=6

    return 0;
}