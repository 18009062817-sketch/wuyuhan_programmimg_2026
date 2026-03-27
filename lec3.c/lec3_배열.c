/*
#include<stdio.h>
#define N 10

int main(){
    int a[N];

    a[1] = 10;
    printf("%d\n", a[1]);
    ++a[1];
    printf("%d\n", a[1]);

    for (int i = 0; i < N; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}
*/

/*
#include<stdio.h>
#define N 3

int main(){
    int a[N];

    for (int i = 0; i < N; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Elements %d: %d\n", i + 1, a[i]);
    
    return 0;
}
*/

/*
#include<stdio.h>
#define N 10

int main(){
    int a[N]={[0]=0, [1]=1, [2]=2, [3]=3, [4]=4, [5]=5, [6]=6, [7]=7};
    a[1] = 5;
    for(in)

   
    return 0;
}
*/






/*
#include<stdio.h>

float average(float input[]);

int main(){
    float a[5] = {100.0 , 95.0, 93.0, 90.0, 85.0}; 
    float b[5] = {60.0,65.0,70.0,75.0,80.0};
    float c[7] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
    
    int size_a = sizeof(a) / sizeof(a[0]);
    int size_b = sizeof(b) / sizeof(b[0]);
    int size_c = sizeof(c) / sizeof(c[0]);
    float avg = average(a, size_a);
    float avg_b = average(b, size_b);
    float avg_c = average(c, size_c);

    printf("Average of array a: %f\n", avg);
    printf("Average of array b: %f\n", avg_b);
    printf("Average of array c: %f\n", avg_c);

    return 0;
}

float average(float input[], int input_num){
        float sum = 0.0;

        //int num = 5;// 배열의 크기를 고정값으로 설정 (5로 가정)
        int num = input_num;
        for (int i = 0; i < num; i++){
            sum += input[i];
        }
        float average = sum / num;
        
        return average;
}
 */
 

/*
 #include<stdio.h>

int main(){
    char string[10] = "10element"
    //printf("%s\n",string);

    for(int i = 0; i < 10; i++){
        printf("%c\n",string[i]);
    }
    printf("\n");
    return 0;   
 }
*/


#include<stdio.h>
#define MAX_SIZE 100
#define RANGE 100

int main(){
    int n,i,number;
    int frequency[RANGE] = {0};
    int arr[MAX_SIZE];

    printf("Enter the number of elements(max%d):",MAX_SIZE);
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        printf("Input %d number:",i+1);
        scanf("%d",&number);
        arr[i]=number;
        if(number>= 0 && number < RANGE){
            frequency[number]++;
        }

    }
    printf("NUmber Frequency\n");
    for(i = 0; i < RANGE;i++){
        if(frequency[i] > 0){
            printf("%d:%d\n",i,frequency[i]);
        }
    }
   
    return 0;   
 }

