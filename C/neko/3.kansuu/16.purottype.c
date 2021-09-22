//ぷろとたいぷせんげんがめんどくさい
#include<stdio.h>
int fanc(int a, int b){
  int c;
  c = a * b;
  return c;
}
int main(void){
  int a, b, c;

  a = 5;
  b = 8;
  c = fanc(a, b);

  printf("%d * %d = %d\n", a, b, c);

  return 0;
}
