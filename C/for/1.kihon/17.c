/*サンプル(6-1)*/
#include<stdio.h>
int main(void){
  double x, y, z;

  printf("浮動小数点数 x を入力して　＞");
  scanf("%lf", &x);
  printf("浮動小数点数 y を入力して　＞");
  scanf("%lf", &y);

  if (x<=y){
    z = y - x;
    printf("x - y = %f\n", z);
  }
  else{
    z = x - y;
    printf("y - x = %f\n", z);
  }
  return 0;
}
