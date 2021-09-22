/*入力した数値が偶数か奇数かを判定(ビット演算子)*/

#include<stdio.h>

int main(){

  int a;

  printf("整数入力 = ");
  scanf("%d", &a);

  if(a == 0)
  printf("%d は偶数、奇数どちらでもありません。\n", a);

  else if( (a & 1 ) == 1 )
  printf("%d は奇数です。\n", a);

  else
  printf("%d は偶数です。\n", a);

  return 0;
}
