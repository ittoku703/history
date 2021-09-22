/*a-z, A-Z, 0-9 を出力*/
#include<stdio.h>
int main(void){

char moji;

for(moji='a'; moji<='z'; ++moji)
  printf("%c", moji);
  printf("\n");

for(moji='A'; moji<='Z'; ++moji)
  printf("%c", moji);
  printf("\n");

  for(moji='0'; moji<='9'; ++moji)
  printf("%c", moji);
  printf("\n");

return 0;
}
