#include<stdio.h>
#include<string.h>

int main(void){

  char str[32];
  size_t len;

  printf("str に文字列入力-->");
  scanf("%s", str);

  len = strlen(str);
  printf("%s の長さは %zu です\n", str, len);

  return 0;
}
