/*小文字を大文字に変換*/
#include<stdio.h>
#include<string.h>
int main(void){
  int i;
  char str[100];

  printf("文字列入力 = ");
  scanf("%s", str);
  printf("小文字を大文字に変換\n");

  for(i=0; i<=strlen(str); i++){
    if(str[i]>=97 && str[i]<=122)
    str[i]=str[i]-32;
  }
  printf("%s\n", str);

  return 0;
}
