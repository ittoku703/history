/*問1*/
#include<stdio.h>
int main(void){
  int a, b;
  double c, d;
  char e, f;
  char str[] = "computer";

  a = 5;
  b = 0x2fb;
  c = 3.14;
  d = 2.548 * (10*10);
  e = 'A';
  f = '8';

  printf("str = %s\n", str);
  printf("a = %d\n", a);
  printf("b = %x\n", b);
  printf("c = %f\n", c);
  printf("d = %e\n", d);
  printf("e = %c\n", e);
  printf("f = %c\n", f);

  return 0;
}
