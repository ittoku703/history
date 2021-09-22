#include<stdio.h>
int main(void){
  int a;
  int *lpa;

  lpa = &a;

  printf("適当な数字を入力してください----");
  scanf("%d", &a);
  printf("変数 a に %d が代入されました\n", a);
  printf("変数 a のアドレスは %p です\n", &a);
  printf("変数 a を指しているポインタは 1pa です\n");
  printf("1pa の値は %d です\n", *lpa);

  return 0;
}
