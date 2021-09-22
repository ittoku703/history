#include<stdio.h>

int main(){

  /*カウンタ変数の宣言*/
  int i;

  /*繰り返し処理*/
  for(i=0; i<10; ++i){
    //ループをスキップ
    if(i==5)
    continue;

  //ループをスキップ
  if(i==7)
  continue;
  //文字列を出力
  printf("Hello Kazunori! %d\n", i);
 }
return 0;
}
