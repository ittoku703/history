/*問1(6-8-2)*/
#include<stdio.h>
int main(void){
  char moji1[50] = "apple";
  char moji2[50] = "banana";
  char moji3[50] = "cherry";
  int n;
  printf("1~3 の整数値入力 (終了条件: Ctrl+Z)\n");
  printf("(数字以外を入力するとバグる)\n");

  while(scanf("%d", &n) != EOF){
    switch(n){
      case 1: printf("%s\n", moji1);
      break;
      case 2: printf("%s\n", moji2);
      break;
      case 3: printf("%s\n", moji3);
      break;
      default: printf("????入力ミス????\n");
      break;
    }
  }
  return 0;
}
