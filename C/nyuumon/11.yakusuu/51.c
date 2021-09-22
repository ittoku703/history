/*最大公約数*/
#include<stdio.h>
int main(void){

  int a, b, r, tmp;

  printf("2つの自然数を入力してください\n");
  printf("1.自然数入力 = ");
  scanf("%d", &a);
  printf("2.自然数入力 = ");
  scanf("%d", &b);

  /*自然数 a > b を確認・入れ替え*/
  if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  }
  /*ユークリッドの互換法*/
  r = a % b;
  while(r!=0){
  a = b;
  b = r;
  r = a % b;
  }
  /*最大公約数を出力*/
  printf("最大公約数は %d です。\n", b);

  return 0;
}
