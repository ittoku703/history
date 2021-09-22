#include<stdio.h>

int main(void){
  int n;
  int *ptr;
  n = 10;
  ptr = &n;

  printf("n の値: %d  n のアドレス: %p\n", n, &n);
  printf("ptr の値: %d  ptr のアドレス: %p\n", *ptr, &ptr);

  return 0;

}
