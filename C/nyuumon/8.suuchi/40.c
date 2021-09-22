/*アルファベットの連続(A to z)と数字(0 to 9)の連番を出力*/

#include<stdio.h>

int main(){

  char moji;

  /*A to Zを出力*/
  for(moji='A'; moji<='Z'; ++moji)
  printf("%c", moji);
  printf("\n");

  /*a to zを出力*/
  for(moji='a'; moji<='z'; ++moji)
  printf("%c", moji);
  printf("\n");

  /*0 to 9を出力*/
  for(moji='0'; moji<='9'; ++moji)
  printf("%c", moji);
  printf("\n");

  return 0;
}
