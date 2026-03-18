/*
#include<stdio.h>

int main(){

    printf("%d\n", 3 && 0);  // 0
    printf("%d\n", 3 || 0);  // 1
    return 0;
}
*/
#include<stdio.h>
int main(){

    printf("3==2: %c\n", 3 ==2 ? 'T' : 'F');  // F
    printf("3>2: %c\n", 3 >2  ? 'T' : 'F');  // T
    printf("3<2: %c\n", 3 <2  ? 'T' : 'F');  // F
    
    return 0;
}