#include<stdio.h>
#include<string.h>

int main(void){
  char str[32], *s = "文字列入力(NULLで終了)-->";

  printf("%s", s);
  while(strcmp(gets(str), "")){
    printf("入力した文字列は %s ですね\n", str);
    printf("%s", s);
  }
  return 0;
}
