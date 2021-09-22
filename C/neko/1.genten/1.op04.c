//びーえむあい
#include<stdio.h>
int main(void){
  double shincho = 1.72, taiju = 65.2;

  printf("BMIは体重(kg)を身長(m)の二乗で割ったものです\n");
  printf("これが 25 を越えると肥満です\n");
  printf("例えば身長%4.2fmで体重%4.2fkgの人では\n", shincho, taiju);
  printf("BMI = %4.2f / (%4.2f * %4.2f)で計算します\n", taiju, shincho, shincho);
  printf("その結果 %4.1f でした\n", taiju / (shincho * shincho));

  return 0;
}
