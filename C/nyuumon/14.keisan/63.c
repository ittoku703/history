/*入力した自然数の各桁の数字の和を計算*/
#include<stdio.h>
int main(){
  int num, big;
  int sum = 0;

  printf("自然数入力 = ");
  scanf("%d", &num);

  while (num!=0){
  big = num % 10;
  sum += big;
  num /= 10;
 }
  printf("各桁の数字の和は %dです。\n", sum);

  return 0;
}
