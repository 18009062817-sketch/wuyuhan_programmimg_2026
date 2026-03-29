

#include<stdio.h> //헤더파일:printf,scanf등 사용하기 위해
#include<stdlib.h> //헤더파일:rand,srand등 사용하기 위해
#include<time.h> //헤더파일:time함수를 사용하기 위해

int win_count = 0; //이긴 횟숫
int lose_count = 0; //진 횟숫
int draw_count = 0; //비긴 횟숫
int streak = 0; //연승 횟숫

int user_scissors = 0; //사용자가 가위 낸 횟숫
int user_rock = 0; //사용자가 바위 낸 횟숫
int user_paper = 0; //사용자가 보 낸 횟숫

//숫자 1,2,3을 각각 가위,바위,보로 출력하는 함수; 반환값이 없으므로 void를 사용한다
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

//사용자의 선택 패턴을 저장하는 함수; 사용자가 무엇을 냈는지 기록해서 AI모드에세 참고할 수 있게 한다
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

//일반 랜덤 모드에서 컴퓨터가 1,2,3 중 하나를 랜덤으로 선택하는 함수 
int random_computer_choice(){
    return rand()%3+1;
}

// AI 분석 모드에서 컴퓨터의 선택을 결정하는 함수
// 사용자가 가장 자주 낸 선택을 분석해서, 그것을 이길 수 있는 선택을 더 자주 내도록 한다
int ai_computer_choice(){
    int most_used; //사용자가 가장 많이 낸 선택
    int r; //랜덤 확률 조절용 변수

    // 사용자의 세 가지 선택 횟수가 모두 같으면 패턴이 없다고 보고 랜덤 선택
    if(user_scissors == user_rock && user_rock == user_paper){
        return random_computer_choice();
    }
      // 사용자가 가장 많이 낸 선택을 찾는다
    if(user_scissors >= user_rock && user_scissors >= user_paper){
        most_used = 1;// 사용자가 가위를 가장 많이 냄
    }
    else if(user_rock >= user_scissors && user_rock >= user_paper){
        most_used = 2; // 사용자가 바위를 가장 많이 냄
    }
    else{
        most_used = 3;// 사용자가 보를 가장 많이 냄
    }

    r = rand()%10;  // 0~9 사이의 랜덤 수 생성
    if(r < 7){
        if(most_used == 1){
            return 2; // 사용자가 가위를 많이 내면 컴퓨터는 바위를 냄
        }
        else if (most_used == 2){
            return 3; // 사용자가 바위를 많이 내면 컴퓨터는 보를 냄
        }
        else{
            return 1; // 사용자가 보를 많이 내면 컴퓨터는 가위를 냄
        }
    }
    return random_computer_choice();// 나머지 30%는 완전 랜덤 선택
}

// 모드에 따라 컴퓨터의 선택을 결정하는 함수; mode가 1이면 일반 랜덤 모드; mode가 2이면 AI 분석 모드
int get_computer_choice(int mode){
    if(mode == 1){
        return random_computer_choice();
    }
    else{
        return ai_computer_choice();
    }
}

// 현재 전적과 패턴을 출력하는 함수
void print_stats(){
    
    printf("=================================================================\n");
    printf("전적 | 승:%d  패:%d  무:%d\n", win_count,lose_count,draw_count);
    printf("연승 | %d연승\n",streak);
    printf("패턴 | 가위:%d 바위:%d 보:%d\n",user_scissors,user_rock,user_paper);
    printf("=================================================================\n");
}

int game(char opponent[],char round_name[], char next_round[], int mode){
    int user, computer;
    // opponent   : 현재 상대 선수 이름
    // round_name : 현재 라운드 이름(8강, 4강, 결승)
    // next_round : 이겼을 때 출력할 다음 라운드 이름
    // mode       : 게임 모드(1 = 일반 랜덤, 2 = AI 분석)
    // 이기면 1, 지면 0을 반환한다

    while(1){ // 한 라운드 안에서 비기면 재경기해야 하므로 무한 반복
        printf("\n");
        printf("=================================================================\n");
        printf("%s\n",round_name);
        printf("[1] 플레이어 -- 상대: %s\n", opponent);
        printf("=================================================================\n");
        print_stats();// 현재 전적과 패턴 출력
        printf("1: 가위     2: 바위     3: 보\n");

    
    while(1){ // 올바른 입력을 받을 때까지 반복
            printf("선택>");
            scanf("%d", &user);
            
        
            if(user >= 1 && user <= 3){
                break;
            }
            printf("1,2,3중에서 선택해주세요.\n");
    }

        save_user_pattern(user);// 사용자의 패턴 기록
        computer = get_computer_choice(mode);// 모드에 따라 컴퓨터 선택 결정

        // 사용자와 컴퓨터의 선택 출력
        printf("나:");
        print_choice(user);
        printf("   %s:", opponent);
        print_choice(computer);
        printf("\n");

        
        // 비긴 경우
        if(user == computer){
            draw_count++; // 무승부 횟수 증가
            streak = 0; // 연승 초기화
            printf("비겼습니다. 재경기!\n");
            continue;  // 현재 라운드를 다시 시작 
        }
        
        
        // 사용자가 이긴 경우    
        if((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2)){
            win_count++; // 승리 횟수 증가
            streak++; // 연승 횟수 증가
            printf("이겼습니다!\n");
            
             // 다음 라운드가 남아 있으면 출력
            if(next_round[0] !='\0'){
                printf( "%s 진출!\n", next_round);
            } // 2연승 이상일 경우 연승 메시지 출력
            if(streak >= 2){
                printf("%d연승 중입니다!\n",streak);
            }
            return 1; // 승리했으므로 1 반환
        }

        lose_count++; // 패배 횟수 증가
        streak = 0; // 패배 횟수 증가
        printf("졌습니다...\n");
        printf("\n");
        printf("\n");
        printf("=================================================================\n");
        printf("아쉽습니다! 다음 기회에 도전해주세요!\n");
        printf("최종 전적-> 승: %d, 패: %d, 무: %d\n",win_count, lose_count, draw_count);
        printf("=================================================================\n");
        return 0; // 패배했으므로 0 반환
    }
}


int main(){
    int mode; // 게임 모드를 저장하는 변수
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

    // 올바른 모드를 입력할 때까지 반복
    while(1){
        printf("모드 선택>");
        scanf("%d", &mode);

        if(mode == 1 || mode == 2){
            break;
        }
        printf("1또는 2를 입력해주세요.\n");
    }

    printf("\n");
    printf("게임을 시작합니다!\n");
 
    // 8강 경기
    if(!game("A","8강","4강",mode)){
        return 0;
    }// 4강 경기
    if(!game("C", "4강","결승",mode)){
        return 0;
    }// 결승 경기
    if(!game("G", "결승","",mode)){
        return 0;
    } // 세 경기 모두 이기면 우승
    printf("=================================================================\n");
    printf("축하합니다! 우승하셨습니다!\n");
    printf("최종 전적->승:%d  패:%d  무:%d\n", win_count,lose_count,draw_count);
    printf("=================================================================\n");
    
    return 0;// 프로그램 정상 종료

}

