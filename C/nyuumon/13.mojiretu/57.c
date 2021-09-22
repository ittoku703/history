/*入力した文字列の文字数を出力*/
#include<stdio.h>
#include<string.h>
int main(){
  int len;
  char moji[100];
  printf("文字入力 = ");
  scanf("%s", moji);

  len = strlen(moji);
  printf("%s の文字の長さは %d です\n", moji, len);

  return 0;
}
