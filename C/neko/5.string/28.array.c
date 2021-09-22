#include<stdio.h>

int main(){

  int a[4] = {10, 20, 30, 40}, i, *p;

  p = a;
  for(i=0; i<4; i++){
    printf("&a[%d] = %p  ", i, &a[i]);
    printf("a[%d] = %d  ", i, a[i]);
    printf("*(p + %d) = %d\n", i, *(p + i));
  }
  return 0;
}
