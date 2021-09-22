/*サンプル(06-2)*/
#include<stdio.h>
int main(void){
  int i, sum, mul;
  sum = 0;
  mul = 1;

  for(i=1; i<=5; ++i){
    sum += i;
    mul *= i;
  }
  printf("和 = %d\n", sum);
  printf("積 = %d\n", mul);

  return 0;
}
