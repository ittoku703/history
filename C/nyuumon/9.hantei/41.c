/*入力した整数が正か負かを判定*/

#include<stdio.h>

int main(){

  int number;

  printf("数値入力 = ");
  scanf("%d", &number);

  if(number > 1)
  printf("%d は正です。\n", number);

  else if(number == 0)
  printf("%d は正と負のどちらでもない。\n", number);

  else
  printf("%d は負です。\n", number);

  return 0;
}
