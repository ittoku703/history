/*n個の整数から一番大きい数を探す*/

#include<stdio.h>

int main(){

  int i;
  /*入力する整数の数*/
  int n;
  /*入力した整数を格納*/
  int num;
  /*大きな整数を格納*/
  int big;

  /*入力する整数の数を入力*/
  printf("入力する整数の数 = ");
  scanf("%d", &n);

  /*1個目の整数を入力*/
  printf("1個目の整数 = ");
  scanf("%d", &num);

  /*1個目の整数を big に代入*/
  big = num;

  for(i=2; i<=n; ++i){
  printf("%d個目の整数 = ", i);
  scanf("%d", &num);

  /*入力した整数を big と比較*/
  if(num > big)
  big = num;
 }

 /*一番大きい数値を出力*/
 printf("一番大きい整数 = %d\n", big);

 return 0;
}
