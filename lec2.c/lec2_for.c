/*
#include<stdio.h>
int main(){
    for(int i = 0; i < 10 ; i++){
        printf("%d\n", i);
    }
   
    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int sum = 0;
    for(int i = 1; i <=30 ; i++){
         if(i % 3 == 0){
            sum = sum + i;
        }
        if(i % 7 == 0){
            sum = sum + i;
        }
    }
    printf("Sum: %d\n", sum);
    
    return 0;
}
    */



/*CUOLE
#include<stdio.h>
int main(){
    int sum = 0;
    for(int i = 1; i <=30 ; i++){
        printf("%d\n", i);
        sum = sum + i;
        
        if ( i > 4) {
        }break;
    }
    printf("Sum: %d\n", sum);
    return 0;
}
    */


/*int main(){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 5; j++){
            if(j == 3){
                break;
                //continue;
            }
            printf("i: %d, j: %d\n", i, j);
        }
    }
    return 0;
}
*/


/*
#include<stdio.h>
int main(){
   int from = 8;
   int to = 16;
   int baesu = 7;

   int d;
   int result;

   for (d=from; d <= to; d++){
        if (d % baesu == 0){
            result = d;
            break;
        } 
    }
    if(result != 0){
        printf("The smallest multiple of %d between %d and %d is: %d\n", baesu, from, to, result);
    } else {
        printf("There is no multiple of %d between %d and %d.\n", baesu, from, to);
    }   
    printf("Result: %d\n", result);
    return 0;
}
*/

/*
*/