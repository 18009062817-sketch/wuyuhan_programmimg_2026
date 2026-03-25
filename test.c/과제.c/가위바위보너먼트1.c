#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print_choice(int n){
    if(n == 1){
        printf("가위");
    }
    else if(n == 2){
        printf("바위");
    }
    else if(n == 3){
        printf("보");
    }
}

int game(char opponent[], char next_round[]){
    int user, computer;

    while(1){
        printf("=================================================================\n");
        printf("[1] 플레이어 -- 상대: %s\n", opponent);
        printf("=================================================================\n");
        printf("1: 가위      2: 바위      3: 보\n");

        while(1){
            printf("선택>");
            scanf("%d", &user);
            
            if(user >= 1 && user <= 3){
                break;
            }
            printf("1,2,3중에서 선택해주세요.\n");
        }    
        computer = rand()%3 + 1;
        
        printf("나:");
        print_choice(user);
        printf("   %s:", opponent);
        print_choice(computer);
        printf("\n");

        if(user == computer){
            printf("비겼습니다. 재경기!\n");
            continue;
        }
        else if((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2)){
            printf("이겼습니다! %s 진출!\n", next_round);
            return 1;
        }
        else{
            printf("졌습니다...\n");
            printf("\n");
            printf("\n");
            printf("=================================================================\n");
            printf("아쉽습니다! 다음 기회에 도전해주세요!\n");
            printf("=================================================================\n");
            return 0;
        }
    } 
}

int main(){
    srand(time(NULL));

    printf("================================================================\n");
    printf("                    가위바위보 토너먼트                    \n");
    printf("================================================================\n");
    printf("\n");
    printf("[대진표]\n");
    printf("----------------------------------------------------------------\n");
    printf("8강\n");
    printf("[1] 플레이어  vs   [2] A\n");
    printf("[3] B  vs   [4] C\n");
    printf("[5] D  vs   [6] E\n");
    printf("[7] F  vs   [8] G\n");
    printf("----------------------------------------------------------------\n");
    printf("당신은 [1] 플레이어입니다.\n");
    printf("----------------------------------------------------------------\n");
    printf("\n");
    printf("\n");
    printf("================================================================\n");


    if(!game("A", "4강")){
        return 0;
    }
    if(!game("C", "결승")){
        return 0;
    }
    if(!game("G", "우승")){
        return 0;
    }      
    printf("=================================================================\n");
    printf("축하합니다! 우승하셨습니다!\n");
    printf("=================================================================\n");
    return 0;
}
    
