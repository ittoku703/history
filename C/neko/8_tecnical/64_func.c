#include<stdio.h>

int main(void){
  int myfunc(char *, char *);     //ここで関数宣言
  int (*ptr)();     //関数ポインタ宣言

  ptr = myfunc;     //代入

  (*myfunc)("田中", "学生");
  (*ptr)("山田", "会社員");
  myfunc("佐藤", "公務員");

  return 0;
}

int myfunc(char *str1, char *str2){
  printf("%s さんは %s です\n", str1, str2);
  return 0;
}
