#include<stdio.h>

int func();

int main(void){
  int (*ptr1)(), (*ptr2)();     //関数へのポインタ宣言

  ptr1 = main;
  ptr2 = func;

  printf("main関数のアドレス = %p\n", ptr1);
  printf("func関数のアドレス = %p\n", ptr2);

  return 0;
}

int func(){
  return 0;
}


/*
#include<stdio.h>

int func(int);

int main(void){
  printf("main関数のアドレス = %p\n", main);
  printf("func関数のアドレス = %p\n", func);

  return 0;
}

int func(int x){
  printf("x = %d\n", x);

  return 0;
}
*/
