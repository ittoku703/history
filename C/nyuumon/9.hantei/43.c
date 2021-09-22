/*入力した2つの整数が同じかどうかを判定*/

#include<stdio.h>

int main(){

  int a, b;

  printf("1.整数入力 = ");
  scanf("%d", &a);

  printf("2.整数入力 = ");
  scanf("%d", &b);

  if(a == b)
  printf("同じ！\n");

  if(a != b)
  printf("ちがーう！\n");

  return 0;
}
