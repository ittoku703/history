#include<stdio.h>

int func1(){
  extern int a;
  extern char *str;

  printf("ここは70_extern.cのfunc1関数\na = %d\n", a);
  printf("strも見えます----%s\n", str);

  return 0;
}
