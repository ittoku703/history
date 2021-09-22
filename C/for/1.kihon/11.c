/*サンプル(5-1)*/
#include<stdio.h>
int main(void){
  int a;
  long l;
  float b;
  char st[] = "printf test";

  a = 67;
  printf("10 : %d\n", a);
  printf("16x : %x\n", a);
  printf("8 : %o\n", a);
  printf("c : %c\n", a);

  l = 1234567890;
  printf("ld : %ld\n", l);

  b = 1234.56;
  printf("f : %f\n", b);
  printf("e : %e\n", b);

  printf("s : %s\n", st);

  return 0;
}
