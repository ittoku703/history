/*問1(7-3)*/

#include<stdio.h>
#include<math.h>
int main(void){
  float x;      //sin, cos, tan
  float i = 0;        //角度

  printf("x\tsin(x)"); printf("\tcos(x)");printf("\ttan(x)\n");

  while(i <= 180){
    printf("%6.2f\t", i);
    x = sin(i * 3.14159 / 180);
    printf("%12.5f\t", x);
    x = cos(i * 3.14159 / 180);
    printf("%12.5f\t", x);
    x = tan(i * 3.14159 / 180);
    printf("%12.5f\t\n", x);
    i += 15;
  }
  return 0;

}

/*答え*/
/*
#include<math.h>
#include<stdio.h>
int main(void){
  double x, r, y1, y2, y3;

  printf("   x   sin(x)   cos(x)   tan(x)\n");

  for(x=0.0; x<=180.0; x = x+15.00){
    r = x * 3.14159 / 180.0;
    y1 = sin(r);
    y2 = cos(r);
    y3 = tan(r);
    printf("%6.2f %12.5f %12.5f %12.5f\n", x, y1, y2, y3);
  }
  return 0;
}
*/
