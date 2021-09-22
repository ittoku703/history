/*cm を inch に変換*/
#include<stdio.h>
int main(void){
  float cm, inch;
  int num, n;

  printf("cm->inch なら1を inch->cm なら2を 入力 = ");;
  scanf("%d", &n);

  if(n == 1){
    printf("cm を inch に変換\n");
    printf("cm 入力 = ");
    scanf("%f", &cm);

    inch = 0.39 * cm;

    printf("inch = %.2f\n", inch);
  }
  if(n == 2){
    printf("inch を cm に変換\n");
    printf("inch 入力 = ");
    scanf("%f", &inch);

    cm = 0.39 / inch;

    printf("cm = %.2f\n", cm);
  }
  return 0;
}
