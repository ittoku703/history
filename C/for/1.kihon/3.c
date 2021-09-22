/*問2*/
#include<stdio.h>
int main(void){
  float a, b;
  double c;
  long int seki;
  short int i = 180;
  short int j = 500;
  char ch = 'S';

  a = 62.5;
  b = 23.3;
  c = a * b;
  seki = (long)i * j;

  printf("ch = %c\n", ch);
  printf("c = %.2f (%.2f * %.2f)\n", c, a, b);
  printf("seki = %ld (%d * %d)\n", seki, i, j);

  return 0;
}
