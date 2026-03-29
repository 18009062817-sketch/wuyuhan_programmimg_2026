

#include<stdio.h> //헤더파일:printf,scanf등 사용하기 위해
#include<stdlib.h> //헤더파일:rand,srand등 사용하기 위해
#include<time.h> //헤더파일:time함수를 사용하기 위해

int win_count = 0;
int lose_count = 0;
int draw_count = 0;
int streak = 0;

int user_scissors = 0;
int user_rock = 0;
int user_paper = 0;

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

void save_user_pattern(int user){  
    if(user== 1){
        user_scissors++;    
    }
    else if(user == 2){
        user_rock++;
    }
    else if(user == 3){
       user_paper++;
    }
}

int random_computer_choice(){
    return rand()%3+1;
}

int ai_computer_choice(){
    int most_used;
    int r;

    if(user_scissors == user_rock && user_rock == user_paper){
        return random_computer_choice();
    }

    if(user_scissors >= user_rock && user_scissors >= user_paper){
        most_used = 1;
    }
    else if(user_rock >= user_scissors && user_rock >= user_paper){
        most_used = 2;
    }
    else{
        most_used = 3;
    }

    r = rand()%10;
    if(r>7){
        if(most_used == 1){
            return 2;
        }
        else if (most_used == 2){
            return 3;
        }
        else{
            return 1;
        }
    }
    return random_computer_choice();
}

int get_computer_choice(int mode){
    if(mode == 1){
        return random_computer_choice();
    }
    else{
        return ai_computer_choice();
    }
}


void print_stats(){
    
    printf("=================================================================\n");
    printf("전적 | 승:%d  패:%d  무:%d\n", win_count,lose_count,draw_count);
    printf("연승 | %d연승\n",streak);
    printf("패턴 | 가위:%d 바위:%d 보:%d",user_scissors,user_rock,user_rock);
    printf("=================================================================\n");
}

int game(char opponent[], char next_round[], char round_name[], int mode){
    int user, computer;

    while(1){
        printf("\n");
        printf("=================================================================\n");
        printf("%s\n",round_name);
        printf("[1] 플레이어 --상대: %s\n", opponent);
        printf("=================================================================\n");
    }

    print_stats();
    printf("1: 가위     2:바위     3:보\n");



    while(1){
            printf("선택>");
            scanf("%d", &user);
            
        
            if(user >= 1 && user <= 3){
                break;
            }
            printf("1,2,3중에서 선택해주세요.\n");
        }

        save_user_pattern(user);
        computer = get_computer_choice(mode);


        printf("나:");
        print_choice(user);
        printf("   %s:", opponent);
        print_choice(computer);
        printf("\n");

    
        if(user == computer){
            draw_count++;
            streak = 0;
            printf("비겼습니다. 재경기!\n");
            continue;
        }

        if((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2)){
            win_count++;
            streak++;
            printf("이겼습니다!");
           
            if(next_round[0] !='\0'){
                printf( "%s 진출!\n", next_round);
            }
            if(streak >= 2){
                printf("%d연승 중입니다!\n",streak);
            }
            return 1;
        }

        lose_count++;
        streak = 0;
        printf("졌습니다...\n");
        printf("\n");
        printf("\n");
        printf("=================================================================\n");
        printf("아쉽습니다! 다음 기회에 도전해주세요!\n");
        printf("'최종 전적-> 승: %d, 패: %d, 무: %d\n",win_count, lose_count, draw_count);
        printf("=================================================================\n");
        return 0;
}


int main(){
    int mode;
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
    printf("모드를 선택하세요.\n");
    printf("1.일반 랜덤 모드\n");
    printf("2.AI 분석 모드\n");
    printf("\n");
    printf("\n");
    printf("================================================================\n");

    while(1){
        printf("모든 선택>");
        scanf("%d", &mode);

        if(mode == 1 || mode == 2){
            break;
        }
        printf("1또는 2를 입력해주세요.\n");
    }

    printf("\n");
    printf("게임을 시작합니다!\n");

    if(!game("A","8강","4강",mode)){
        return 0;
    }
    if(!game("C", "4강","결승",mode)){
        return 0;
    }
    if(!game("G", "결승","",mode)){
        return 0;
    } 
    printf("=================================================================\n");
    printf("축하합니다! 우승하셨습니다!\n");
    printf("최중 전적->승:%d  패:%d  무:%d\n", win_count,lose_count,draw_count);
    printf("=================================================================\n");
    
    return 0;

}

