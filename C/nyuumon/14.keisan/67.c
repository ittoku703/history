/*割合と百分率*/
#include<stdio.h>
int main(void){
  float num1, num2;
  float sum = 0;

  printf("もとの数を入力 = ");
  scanf("%f", &num1);

  printf("くらべる数を入力 = ");
  scanf("%f", &num2);

  sum = num2 / num1;
  printf("%.2f に対する %.2f の割合は %.2f です\n", num1, num2, sum);

  sum *= 100;
  printf("%.2f に対する %.2f の百分率は %.2f ％です\n", num1, num2, sum);

  return 0;
}
