/*問2(4-1)*/
#include<stdio.h>
int main(void){
  int a = 3000, b =  5000;
  long c;

  c = (long)a*12 + (long)b*8;
  printf("結果 = %ld\n", c);

  c = (long)a*8 + (long)b*12;
  printf("結果 = %ld\n", c);
}
