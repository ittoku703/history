/*素数の判定*/

#include<stdio.h>

int main(void){

  int i;
  /*自然数*/
  int number;
  /*判定フラグ*/
  int flog = 0;

  /*自然数の入力*/
  printf("自然数 = ");
  scanf("%d", &number);

  /*素数かどうかの判定*/
  for(i=2; i<number; ++i){
    if(number%i==0){
      flog = 1;
      break;
    }
  }
  /*判定結果を出力*/
  if(flog==0)
  printf("%d は素数です。\n", number);
  else
  printf("%d は素数ではありません。\n", number);

  return 0;
}
