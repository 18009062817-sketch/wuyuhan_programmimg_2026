/*
#include<stdio.h>
int main(){
    int num;
    int sum = 0;
    while(1){
        printf("Input a number: ");
        scanf("%d", &num);

        sum+=num;
        if (num == 0){
            break;
        }

    }
    printf("Sum is: %d\n", sum);
    return 0;

}
*/


/*
#include<stdio.h>
int main(){
    int digits = 0;
    int n;

    printf("postive integer: ");
    scanf("%d", &n);

    do{
        n /= 10;
        digits++;
    } while(n > 0);

    printf("Number of digits: %d\n", digits);
    
    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a = 10;
    float b = 3.14;
    char c = 'd';

    if('a' < 'b'){
        printf("b(%c-%d) is greater than a(%c-%d)\n", c, c, a, a);
    }
    printf("before c: %c\n", c);
    if('a' <= 'c' && 'c' <= 'z'){
        printf("c(%c-%d) is a lowercase letter\n", c, c); //c=c-'A+'a';
    }
    printf("after c: %c\n", c);
    return 0;
}
*/


#include<stdio.h>
int main(){
    float a = 10.0;
    int b = 3;

    int c = b/a; // 3/10.0 = 0.3 -> 0
    printf("%d / %f = %d\n", b, a, c);

    float d = b/a; // 3/10.0 = 0.3
    printf("%d / %f = %f\n", b, a, d);

    int e = 10;
    float f = b/e; // 3/10 = 0.3 -> 0
    printf("%d / %d = %f\n", b, e, f);
    
    return 0;
}