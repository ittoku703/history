/*問1(7-1)*/
#include<stdio.h>
#include<string.h>
int main(void){
  char a[150];
  char b[150];

  strcpy(a, "abcde");
  strcpy(b, "vwxyz");

  printf("a = %s b = %s\n", a, b);

  if(strcmp(a, b) == 0)
  printf("文字列 a ,b は等しい\n");
  else if(strcmp(a, b) > 0)
  printf("文字列 a は b より大\n");
  else
  printf("文字列 a は b より小\n");

  strcat(a, b);
  printf("文字列 a = %s||文字列 a の長さ = %lu\n", a, strlen(a));

  return 0;
}
