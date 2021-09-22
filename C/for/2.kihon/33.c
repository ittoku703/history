/*問2(6-4-1)*/
#include<stdio.h>
int main(void){
  char str1[100], str2[100];
  int i = 0;

  printf("文字列入力 = ");
  scanf("%s", str1);
  do{
    str2[i] = str1[i];
  }while(str1[i++]!='\0');

  printf("str2 = %s", str2);

  printf("\n");
  return 0;
}
