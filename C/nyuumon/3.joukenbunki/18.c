#include<stdio.h>

int main(void){

int a;

  printf("整数入力 = ");
  scanf("%d", &a);

  /*条件演算子*/

  a >= 10 ? printf("%d は 10 より大きい。または 10\n", a) : printf("%d は 10 より小さい。\n", a);

  return 0;
}
