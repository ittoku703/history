//pa に 5 を代入
#include<stdio.h>
int main(void){
  int a;
  int *pa;

  pa = &a;
  *pa = 5;
  printf("a = %d\npa = %d\n", a, *pa);
  return 0;
}
