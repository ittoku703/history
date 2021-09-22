/*1から入力した自然数までの総和を計算*/
#include<stdio.h>
int main(void){
  int i, num;
  int a = 0;

  printf("自然数入力 = ");
  scanf("%d", &num);

  for(i=1; i<=num; ++i){
    a += i;
  }
  if(a<=0)
  printf("自然数を入力してください\n");
  else
  printf("%d までの総和は %d です。\n", num, a);

  return 0;
}
