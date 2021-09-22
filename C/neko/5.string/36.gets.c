#include<stdio.h>

int main(){

  char str[32];

  printf("文字列入力-->");
  gets(str);
  printf("入力した文字列は %s ですね\\(^o^)/\n", str);

  return 0;
}
