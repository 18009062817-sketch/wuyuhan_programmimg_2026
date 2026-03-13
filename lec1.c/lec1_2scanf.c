
/*
#include<stdio.h>
int main(){
    int  num1,num2;

    printf("첫 번째 정수: ");
    scanf("%d", &num1);
    printf("두 번째 정수: ");
    scanf("%d", &num2);

    printf("입력된 정수는 [%d]와 [%d]입니다.\n", num1, num2);

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int  num1,num2;

    printf("첫 번째 정수: ");
    scanf("%d", &num1);
    printf("두 번째 정수: ");
    scanf("%d", &num2);

    printf("입력된 정수는 [%d]와 [%d]입니다.\n", num1, num2);
    printf("---------------\n");
    printf("합: %d\n", num1+num2);
    printf("차: %d\n", num1-num2);
    printf("곱: %d\n", num1*num2);
   
    return 0;
}
*/

#include<stdio.h>
int main(){
    int  num1;
    float f1;
    char c1;

    printf("Enter an integer, float,char: ");
    scanf("%d %f/%c", &num1, &f1, &c1);

    printf("you entered: %d, %f/%c\n", num1, f1, c1);
    
    return 0;
}

