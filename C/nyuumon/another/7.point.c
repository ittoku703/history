#include<stdio.h>
int main(){
  int i = 2;
  int *p;

  p = &i;

  printf("%p\n", &p);

  return 0;
}
