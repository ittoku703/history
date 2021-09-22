#include<stdio.h>

int main(){

char a[1000];

  printf("文字入力\n");
  scanf("%[a-z]", a);

  printf("%s\n", a);

  return 0;
}
