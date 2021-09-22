//なぜかdouble-->int-->charにいくまでに3ばいとつかう
#include<stdio.h>

int main(void){
  char c;
  int i;
  double d, e;
  printf("変数 c のアドレス %p \n", &c);
  printf("変数 i のアドレス %p \n", &i);
  printf("変数 d のアドレス %p \n", &d);
  printf("変数 e のアドレス %p \n", &e);
  return 0;
}
