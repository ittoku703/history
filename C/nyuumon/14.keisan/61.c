/*入力した2つの整数を足し算&引き算*/
#include<stdio.h>
int main(void){
  int num1, num2, c;

  printf("1.整数入力 = ");
  scanf("%d", &num1);
  printf("2.整数入力 = ");
  scanf("%d", &num2);

  c = num1 + num2;
  printf("足し算 %d\n", c);

  c = num1 - num2;
  printf("引き算 %d\n", c);

  return 0;
}
