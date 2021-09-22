//ふぁんくかんすう
#include<stdio.h>

int func(int, int);

int main(void){
  int a, b, c;

  a = 10;
  b = 20;
  c = func(a, b);
  printf("%d + %d = %d\n",a, b, c);

  return 0;
}

int func(int a, int b){
  int c;
  c = a + b;
  return c;
}
