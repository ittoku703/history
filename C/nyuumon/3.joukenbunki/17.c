#include<stdio.h>

int main(void){

  /*変数の宣言*/
  int a;

  printf("数値入力 = ");
  scanf("%d", &a);

  switch (a){
    case 0: //a が　0
    printf("0 です。\n");
    break;

    case 1: //a が 1
    printf("1 です。\n");
    break;

    case 2: //a が 2
    printf("2 です。\n");
    break;

    case 3: //a が 3
    printf("3 です。\n");
    break;

    case 4: //a が 4
    printf("4 です。\n");
    break;

    case 5: //a が 5
    printf("5 です。\n");
    break;

    default:
    printf("1 2 3 4 5以外です。\n");
    break;
  }
  return 0;
}
