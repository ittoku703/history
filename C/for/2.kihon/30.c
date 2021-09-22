/*問3(6-3-1)*/
#include<stdio.h>
int main(void){
  char num1[100], num2[100];
  int flag = 0;
  int i = 0;

  printf("同じ長さの文字列を2つ入力しなさい\n");
  scanf("%s\n", num1);
  scanf("%s", num2);

  while(num1[i] != '\0'){
    if(num1[i]!=num2[i])
    flag++;
    i++;
  }
  if(flag == 0)
  printf("等しい文字列を表示\n");
  else
  printf("異なる文字列を表示\n");

  return 0;
}
