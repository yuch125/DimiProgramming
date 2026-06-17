#include <stdio.h>
void add_expense();
void add_income();
void view_all();
void view_by_category();
int main(){
   int n;
   while(1){
      printf("========================================\n");
      printf("           < 나의 용돈 기입장>           \n");
      printf("< 1. 지출 내역 추가>\n");
      printf("< 2. 수입 내역 추가>\n");
      printf("< 3. 전체 내역 조회>\n");
      printf("< 4. 카테고리 별 내역 조회>\n");
      printf("< 0. 종료>\n\n");
      printf("원하시는 메뉴의 번호를 선택하세요 : ");
      scanf("%d", &n);
      while(n>4){
         printf("다시 입력해주세요: ");
         scanf("%d", &n);
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
         return 0;   
         printf("========================================\n");
      }
   }
   return 0;
}
void add_expense(){
   return;
}
void add_income(){
   return;
}
void view_all(){
   return;
}
void view_by_category(){
   return;
}