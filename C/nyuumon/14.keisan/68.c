/*五教科の平均点*/
#include<stdio.h>
int main(void){
  int num1, num2, num3, num4, num5;
  int heikin = 0;

  printf("五教科の点数を入力\n");
  printf("国語 = ");
  scanf("%d", &num1);
  printf("数学 = ");
  scanf("%d", &num2);
  printf("英語 = ");
  scanf("%d", &num3);
  printf("理科 = ");
  scanf("%d", &num4);
  printf("社会 = ");
  scanf("%d", &num5);

  heikin = (num1+num2+num3+num4+num5) / 5;

  printf("5教科の平均は %d 点です\n", heikin);

  return 0;
}
