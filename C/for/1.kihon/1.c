/*データの扱い方　　サンプル*/
#include<stdio.h>
int main(){
  char   moji = 'H';   //mojiを文字型で宣言し、'H'で初期化
  int    cnt = 5;      //cntを整数型で宣言し、5で初期化
  long   goukei;       //goukeiを倍長整数型で宣言
  float  x, y;         //xとyを単精度浮動小数点型で宣言
  double z;            //zを倍精度浮動小数点型で宣言

  x = 2.6;
  y = 3.8;

  z = x + y;

  goukei = 100 * cnt;

  printf("データの扱い方　　サンプル\n");
  printf("%.2f + %.2f = %.2lf\n", x, y, z);
  printf("100 * %d = %ld\n", cnt, goukei);
  printf("%c\n", moji);

  return 0;
}
