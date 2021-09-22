/*問2(5-4)*/
#include<stdio.h>
int main(void){
  int a;
  char str;
  long l;
  float b;
  double c;

  printf("10進数入力 = ");
  scanf("%d", &a);
  printf("10進数出力 %d\n", a);
  printf("16進数出力 %x\n", a);

  printf("16進数入力 = ");
  scanf("%x", &a);
  printf("10進数出力 %d\n", a);
  printf("16進数出力 %x\n", a);

  printf("１文字入力 = ");
  scanf("%*c%c", &str);   //%*は改行の読み捨て
  printf("１文字出力 %c\n", str);
  printf("10進数出力 %d\n", str);
  printf("16進数出力 %x\n", str);

  printf("long入力 = ");
  scanf("%ld", &l);
  printf("long出力 %ld\n", l);

  printf("float入力 = ");
  scanf("%f", &b);
  printf("long出力 %f\n", b);

  printf("double入力 = ");
  scanf("%lf", &c);
  printf("double出力 %lf\n", c);

  return 0;
}
