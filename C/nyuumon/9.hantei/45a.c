/*3つの数値から一番大きい数値を探す(少数)*/

#include<stdio.h>

int main(){

  float a, b, c;

  printf("異なる3つの数値を入力してください。\n");

  printf("1.数値入力 = ");
  scanf("%f", &a);

  printf("2.数値入力 = ");
  scanf("%f", &b);

  printf("3.数値入力 = ");
  scanf("%f", &c);

  if(a>b && a>c)
  printf("一番大きい数値は1.の %.2f です。\n", a);

  if(b>a && b>c)
  printf("一番大きい数値は2.の %.2f です。\n", b);

  if(c>a && c>a)
  printf("一番大きい数値は3.の %.2f です。\n", c);

  return 0;
}
