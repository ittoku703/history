#include<stdio.h>

int main(void){

  /*変数の宣言*/
  int a;

  /*数値の入力*/
  printf("数値を入力してください = ");
  scanf("%d", &a);

  /*条件分岐*/
  if (a == 10)
    printf("入力した数値は 10または 20です。\n");

  else if (a == 20)
    printf("入力した数値は 10または 20です。\n");

  else if (a > 10 && a < 20)
    printf("入力した数値は 10以上 20以下です。\n");

  else
    printf("入力した数値は 10以下 20以上です。\n");

    return 0;
}
