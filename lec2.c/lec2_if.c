/*
#include<stdio.h>
int main(){
    if(0)printf("Print 0 run!!\n"); // 0 is false, so this line will not be printed
    if(1)printf("Print 1 run!!\n"); // 1 is true, so this line will be printed
    if(-5)printf("Print -5 run!!\n"); // In C, any non-zero value is considered true, so this line will also be printed
    return 0;
}
*/


/*#include<stdio.h>
int main(){
    int a;
    if(a=1){
    printf("Print 1 run!!\n");
    printf("Print 1 run!!\n");
    }
    return 0;
}
*/


/*
#include<stdio.h>
int main(){
    int a=6;
    if(-5<= a && a < 4)
        printf("Print 1 run!!\n");

    return 0;
}
*/



/*#include<stdio.h>
int main(){
    if (2 > 3)
    {
        printf("2>3 is true!!\n"); 
    } 
    else
    {
        printf("2>3 is false!!\n");
    }

    return 0;
}
*/



#include<stdio.h>
int main(){
    int a=2;
    if (a<0){
        printf("a is negative!!\n");
    }
    else if (a<10){
        printf("a is less than 10!!\n");
    }
    else if (a<3){
        printf("a is less than 3!!\n");
    }
    else{
        printf("a is other!!\n");
    }

    return 0;
}
