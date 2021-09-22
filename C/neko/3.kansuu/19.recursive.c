//関数の呼び出し
#include<stdio.h>

static int i = 1;

int main(void){
  if(i<=10){
    printf("i = %d\n", i);
    i++;
    main();
  }
  return 0;
}
