/*引数あり＆戻り値あり*/

#include<stdio.h>

int tasu(int a, int b){

  /*足し算*/
  return a + b;
}

int main(void){

  /*変数の宣言と数値の代入*/
  int a = 3;
  int b = 5;
  int c;

  /*関数の呼び出し*/
  c = tasu(a, b);

  /*足し算の結果と出力*/
  printf("%d\n", c);

  return 0;
}
