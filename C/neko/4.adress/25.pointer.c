//p の p
#include<stdio.h>
int main(){
  int a;
  int *p;
  int **pp;

  p = &a;
  pp = &p;
  a = 10;
  printf("a = %d\np = %d\npp = %d\n", a, *p, **pp);

  return 0;
}
