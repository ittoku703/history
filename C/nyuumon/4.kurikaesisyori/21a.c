#include<stdio.h>

int main(void){

  /*カウンタ変数の宣言*/
  int i = 0;

  /*繰り返し処理*/
  while(i<10){
    printf("Hello World! %d\n", i);
    //カウンタ限数を +1
    i = i + 1;
  }
  return 0;
}
