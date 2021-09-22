//ぜんち
#include<stdio.h>
int main(void){
  int a, b;
  a = b = 10;

  printf("a = %d\n", ++a);//評価前に++
  b = b + 1;
  printf("b = %d\n", b);

  return 0;
}
