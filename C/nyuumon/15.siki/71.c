/*直角三角形の斜辺を計算*/
#include<stdio.h>
#include<math.h>
int main(void){
  float a, b, c;

  printf("直角三角形の斜辺を計算\n");
  printf("辺 a = ");
  scanf("%f", &a);
  printf("辺 b = ");
  scanf("%f", &b);

  //c2=a2+b2
  c = sqrt(a*a + b*b);
  printf("斜辺 c = %.2f\n", c);

  return 0;
}
