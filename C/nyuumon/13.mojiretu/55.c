/*文字か数字を判定*/
#include<stdio.h>
int main(){

  char moji;

  printf("文字入力 = ");
  scanf("%c", &moji);

  if((moji>='a'&& moji<='z')||(moji>='A'&& moji<='Z'))
  printf("入力した文字 %c はアルファベット\n", moji);
  else if(moji>='0'&& moji<='9')
  printf("入力した文字 %c は数字\n", moji);
  else
  printf("アルファベットか数字を入力してください\n");

  return 0;
}
