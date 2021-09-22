//ぜんちとごち
#include<stdio.h>
int main(void){
  int a = 10;
  int b = 10;

  printf("a = %d\n", a++);//評価後に++
  printf("a = %d\n", a);

  printf("b = %d\n", ++b);//評価前に++
  printf("b = %d\n", b);

  return 0;
}
