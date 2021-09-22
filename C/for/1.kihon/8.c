/*問2(3-1)*/
#include<stdio.h>
int main(void){
  int a;
  int oturi;
  oturi = 10000 - 468;
  a = oturi / 5000;
  printf("五千円札の枚数 = %d\n", a);
  oturi -= 5000 * a;

  a = oturi / 1000;
  printf("千円札の枚数 = %d\n", a);
  oturi -= 1000 * a;

  a = oturi / 500;
  printf("五百円玉の枚数 = %d\n", a);
  oturi -= 500 * a;

  a = oturi / 100;
  printf("百円玉の枚数 = %d\n", a);
  oturi -= 100 * a;

  a = oturi / 50;
  printf("五十円玉の枚数 = %d\n", a);
  oturi -= 50 * a;

  a = oturi / 10;
  printf("十円玉の枚数 = %d\n", a);
  oturi -= 10 * a;

  a = oturi / 5;
  printf("五円玉の枚数 = %d\n", a);
  oturi -= 5 * a;

  a = oturi / 1;
  printf("一円玉の枚数 = %d\n", a);

  return 0;
}
