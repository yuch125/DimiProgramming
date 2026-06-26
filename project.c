#include <stdio.h>
#include <windows.h>

// 함수 원형 선언
void add_expense();
void add_income();
void view_all();
void view_by_category();

// 전역 변수 선언
int plema[100]; // 수입인지 (1), 지출인지 (-1) 구분용 
int amounts[100];      // 금액 저장
char contents[100][50]; // 메모 저장
int categories[100]; // 카테고리 저장
char categories_name[10][10]={"식비", "문구", "교통", "여가", "저축", "기타", "수입"};
int categories_amounts[10][3];
int history_count = 0; // 저장된 내역 개수
int balance = 0; // 현재 잔액

int main(int argc, char const *argv[]){
   //시우
    int n;
   for(int i=0;i<10;i++)
      categories_amounts[i][2]=i; // 카테고리 번호 저장
   while(1){
      printf("========================================\n");
      printf("           < 나의 용돈 기입장 >           \n");
      printf("< 1. 지출 내역 추가 >\n");
      printf("< 2. 수입 내역 추가 >\n");
      printf("< 3. 전체 내역 조회 >\n");
      printf("< 4. 카테고리 별 내역 조회 >\n");
      printf("< 0. 종료 >\n\n");
      printf("원하시는 메뉴의 번호를 선택하세요 : ");
      scanf("%d", &n); // 입력
      while(n>4 || n<0){
         printf("다시 입력해주세요: "); 
         scanf("%d", &n); // 재입력
         
      } 
      if(n==1)
         add_expense();
      else if(n==2)
         add_income();
      else if(n==3)
         view_all();
      else if(n==4)
         view_by_category();
      else if(n==0){
         printf("========================================\n");
         printf("용돈 기입장 사용이 완료되었습니다.\n");
         printf("made by 시우, 유찬, 진서");
         return 0;
      }
   }
   return 0;
}
void add_expense(){
   //유찬
   plema[history_count]=-1; // 지출이므로 -1 저장
    printf("========================================\n");
    printf("             <용돈 지출 추가>            \n");

    printf("사용한 용돈의 금액을 작성해 주세요 : ");
    scanf("%d", &amounts[history_count]); // 금액 입력
   balance += amounts[history_count]*plema[history_count]; // 잔액에서 지출 금액 차감

    int select;
    printf("\n용돈을 사용한 카테고리를 선택해 주세요.\n");
    //식비, 문구, 교통, 여가, 저축, 기타
    printf("1.식비\n");
    printf("2.문구\n");
    printf("3.교통\n");
    printf("4.여가\n");
    printf("5.저축\n");
    printf("6.기타\n");

   // 카테고리 번호 입력
    scanf("%d", &select);
   
   // 1~6 범위 안에서 입력받기 
    while((select>6) || (select<1)){
        printf("잘못된 입력입니다. 다시 입력해 주세요 : ");
        scanf("%d", &select);
    }
    categories[history_count] = select; // 카테고리 저장
   categories_amounts[select][1]+=amounts[history_count]; // 카테고리의 총 지출 금액에 추가

   printf("\n지출 내용을 입력하세요 : ");
   scanf("%s",contents[history_count++]); // history_count 1 증가

    printf("========================================\n");
   printf("지출 내역이 저장되었습니다.\n");
   Sleep(3000); // 3초 딜레이
   return;
}
void add_income(){
   //진서
   plema[history_count]=1;
   printf("========================================\n");
   printf("             <용돈 수입 추가>            \n");

   printf("얻은 용돈의 금액을 입력하세요 : ");
   scanf("%d",&amounts[history_count]);   // 용돈 입력
   balance += amounts[history_count]*plema[history_count];   // 잔액 추가

   categories[history_count]=7;   // 카테고리에 수입 표시

   printf("\n수입 내용을 입력하세요 : ");
   scanf("%s",contents[history_count++]);   // 수입 내용 입력

   printf("========================================\n");
   printf("수입 내역이 저장되었습니다.\n");
   Sleep(3000);   // 3초 딜레이
   return;
}
void view_all(){
   printf("========================================\n");
    printf("                [내역조회]               \n");
   
    printf("구분    |  카테고리  |    금액    |    메모    |\n");
    for(int i = 0; i < history_count; i++){
        if(plema[i]==1)  // 값이 1이면 수입, 아니면 지출
            printf("수입    |    ");
        else
            printf("지출    |    ");
      // 카테고리 번호에 맞는 이름 출력
        printf("%s    |", categories_name[categories[i]-1]);
        printf("%12d| ", amounts[i]); // 금액 출력
        printf("%s |\n", contents[i]); // 내역 출력
    }
    printf("-----------------------------------------\n");
    printf("총 잔액 : %d\n", balance); // 잔액 출력
   printf("========================================\n");
   Sleep(3000); // 3초 딜레이
   return;
}
void view_by_category(){
   int t;
   // 카테고리별 내역 순위를 위해 버블 정렬 방식 사용 
   for(int i=1;i<=6;i++){
      for(int j=1;j<=6-i-1;j++){
         if(categories_amounts[j][1]<categories_amounts[j+1][1]){
            t=categories_amounts[j][1];
            categories_amounts[j][1]=categories_amounts[j+1][1];
            categories_amounts[j+1][1]=t;
            t=categories_amounts[j][2];
            categories_amounts[j][2]=categories_amounts[j+1][2];
            categories_amounts[j+1][2]=t;
         }
      }
   }
   // 카테고리당 총 금액 기준으로 내림차순 정렬
   printf("========================================\n");
    printf("           [카테고리별 조회]          \n");
    printf("      순위  |  카테고리  | 지출 금액\n");
    for(int i=1; i<=6; i++){
      printf("       %d    |", i); // 순위 출력
        printf("    %s    |", categories_name[categories_amounts[i][2]-1]); // 카테고리 이름 출력
        printf("%10d\n", categories_amounts[i][1]); // 카테고리당 총금액 출력
    }
   printf("========================================\n");
   Sleep(3000); // 3초 딜레이
   return;
}
