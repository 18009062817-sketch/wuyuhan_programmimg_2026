#include<stdio.h>
int main(){
    int from=8;
    int to=16;
    int baesu=7;

    int d;
    for(int d=from;d<=to;d++){
        if(d%baesu!=0){
            printf("%d\n",d);
        }
    }
    return 0;
}