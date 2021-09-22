/*入力した数値が偶数か奇数かを判定(剰余算)*/

#include<stdio.h>

int main(){

  int a;

  printf("整数入力 = ");
  scanf("%d", &a);

  if(a == 0)
  printf("%d です。\n", a);

  else if(a % 2 == 0)
  printf("%d は偶数です。\n", a);

  else
  printf("%d は奇数です。\n", a);

  return 0;
}
