/*回文数の判定*/

#include<stdio.h>

int main(){

  /*数値(整数)*/
  int num;

  /*変数*/
  int reverse = 0;
  int remaind;
  int tmp;

  /*数値入力*/
  printf("数値入力 = ");
  scanf("%d", &num);

  tmp = num;
  while(tmp!=0){

    /*1桁ずつ数値を切り出す*/
    remaind = tmp % 10;

    /*数値を反転*/
    reverse = reverse * 10 + remaind;

    /*次の桁にシフト*/
    tmp /= 10;
  }
  /*反転した数値と本も数値を比較*/
  if(reverse == num)
  printf(" [%d] は回文数です。\n", num);

  else
  printf(" [%d] は回文数ではありません。\n",num);

  return 0;
}
