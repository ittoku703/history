#include<stdio.h>
#include<string.h>

int main(){
  char str1[32], str2[32];
  int cmp;

  printf("str1 に数値入力-->");
  scanf("%s", str1);
  printf("str2 に数値入力-->");
  scanf("%s", str2);

  cmp = strcmp(str1, str2);     //アドレスの並びと類似
  if(cmp < 0)
  printf("%s は %s より前にあります\n", str1, str2);
  else if(cmp > 0)
  printf("%s は %s より後ろです\n", str1, str2);
  else
  printf("%s と %s は同じです\n", str1, str2);

  return 0;
}
