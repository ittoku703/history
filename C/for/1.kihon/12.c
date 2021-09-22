/*問1(5-1)*/
#include<stdio.h>
int main(void){
  float a = 53.6, b = 84.7, c = 57.89;
  double d;

  d = (a+b) / (c*b);
  printf("少数形式 = %lf\n", d);
  printf("指数形式 = %le\n", d);

  return 0;
}
