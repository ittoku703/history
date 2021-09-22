/*入力した自然数を逆順に並べ替え*/

#include<stdio.h>

int main(){

  int number;
  int reverse = 0;

  printf("自然数入力 = ");
  scanf("%d", &number);

  while(number > 0){
    reverse = reverse * 10 + number % 10;
    number /= 10;
  }

  printf("逆順の自然数 = %d\n", reverse);

  return 0;
}
