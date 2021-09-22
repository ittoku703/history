#include<stdio.h>

int main(){

  /*カウント変数の宣言*/
  int i = 10;

  /* while文：繰り返し処理*/
  while(i<5){
    printf("while文だよ。\n");
  }

  /* do 〜　while文：繰り返し処理*/
  do{
    printf("do 〜 wile文だよ。\n");
  }while(i<5);

  return 0;
}
