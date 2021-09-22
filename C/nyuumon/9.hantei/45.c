/*3つの数値から一番大きい数値を探す(整数)*/

#include<stdio.h>

int main(){

  int a, b, c;

  printf("異なる3つの数値を入力してください。\n");

  printf("1.数値入力 = ");
  scanf("%d", &a);

  printf("2.数値入力 = ");
  scanf("%d", &b);

  printf("3.数値入力 = ");
  scanf("%d", &c);

  if(a>b && a>c)
  printf("一番大きい数値は1.の %d です。\n", a);

  if(b>a && b>c)
  printf("一番大きい数値は2.の %d です。\n", b);

  if(c>a && c>a)
  printf("一番大きい数値は3.の %d です。\n", c);

  return 0;
}
