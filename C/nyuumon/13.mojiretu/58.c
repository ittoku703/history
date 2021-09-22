/*大文字を小文字に変換*/
#include<stdio.h>
#include<string.h>
int main(void){
  int i;
  char moji[100];

  printf("文字列入力 = ");
  scanf("%s", moji);
  printf("大文字を小文字に変換\n");

  for(i=0;i<=strlen(moji);i++){
    if(moji[i]>=65 && moji[i]<=90)
    moji[i]=moji[i]+32;
  }
  printf("%s\n", moji);

  return 0;
}
