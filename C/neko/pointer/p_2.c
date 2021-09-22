#include<stdio.h>

int main(){

  struct kure_st{
    int num1;
    int num2;
    char m;
  };
  struct kure_st kure = {
    .num2 = 10,
    .m = 'd'
  };
  printf("%d\n", kure.num1);
  printf("%d\n", kure.num2);
  printf("%c\n", kure.m);

  return 0;
}
