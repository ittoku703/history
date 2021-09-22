/*入力した文字列の文字数を表示*/
#include<stdio.h>
int main(){
  int len;
  char moji[100];

  printf("文字列入力 = ");
  scanf("%s", moji);

  for(len=1; moji[len]!='\0'; ++len){
  }
  printf("%s の文字数は %d です\n", moji, len);

  return 0;
}
