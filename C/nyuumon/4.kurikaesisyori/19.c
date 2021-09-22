#include<stdio.h>

int main(void){

  /*カウンタ変数の宣言*/
  int i;
  /*和を格納する変数*/
  int sum = 0;
  /*繰り返し処理*/
  for(i=1; i<=100; ++i){
    printf("%d ", i);
    sum += i;
  }
  printf("\n合計 =%d\n", sum);

  return 0;
}
