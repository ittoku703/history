#include<stdio.h>

int main(){

  struct DATA {
    int num1;
    int num2;
    char m;
  };
  struct DATA data1 = {1, 2, 'h'};
  printf("num1: %d\n", data1.num1);
  printf("num2: %d\n", data1.num2);
  printf("m   : %c\n", data1.m);

  struct DATA data2 = {1};
  printf("num1: %d\n", data2.num1);
  printf("num2: %d\n", data2.num2);
  printf("m   : %c\n", data2.m);

  return 0;
}
