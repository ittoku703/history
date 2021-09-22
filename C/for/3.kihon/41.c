/*問2(7-1)*/
#include<stdio.h>
#include <string.h>
int main(void){
  char a[200], b[200];
  int len;

  while(len < 100){
    printf("文字列 B に文字列入力 = ");
    scanf("%s", b);
    strcat(a, b);
    len = strlen(a);
    printf("残り %d  ", 100-len);
  }
  printf("\n文字列 B = %s || 長さ = %d\n", a, len);

  return 0;
}
