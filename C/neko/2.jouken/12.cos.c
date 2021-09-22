//こさいんかーぶ
#include<stdio.h>
#include<math.h>
int main(void){

  int i, j;
  double pai = 3.14159, kakudo = 180, cosvalue = 0;

  printf("角度   cos値   イメージ\n");

  for(i=1; i<=60; ++i){
    printf("-");
  }printf("\n");

  for(i=90; i>=0; i-=5){
    printf("%-4d   ", i);
    cosvalue = cos(i * pai / kakudo);
    printf("%.6lf ", cosvalue);

    for(j=1; j<=(int)(cosvalue * 40); j++){
      printf("*");
    }
    printf("\n");
  }
  printf("\nこれが、コサインサーブだ！！！\n\n");
  return 0;
}
