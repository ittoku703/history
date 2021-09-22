/*引数あり＆戻り値なし*/

#include<stdio.h>

void tasu(int a, int b){

  /*変数の宣言*/
  int c;

  /*足し算*/
  c = a + b;

  /*出力*/
  printf("a + b = %d\n", c);
}
int main(void){

  /*変数の宣言と数値の代入*/
  int a = 3;
  int b = 5;

  /*関数の呼び出し*/
  tasu(a, b);

  return 0;
}
