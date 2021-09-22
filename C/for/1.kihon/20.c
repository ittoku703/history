/*問1(6-1-2)*/
#include<stdio.h>
int main(void){
  char moji;

  printf("文字入力 = ");
  scanf("%c", &moji);

  if(moji>='A'&&moji<='Z')
  printf("%c は英大文字です\n", moji);
  else if(moji>='a'&&moji<='z')
  printf("%c は英小文字です\n", moji);
  else if(moji>='0'&&moji<='9')
  printf("%c は数字です\n", moji);
  else
  printf("%c は英字でも漢字でもありません\n", moji);

  return 0; 
}
