/*問1(6-8-1)*/
#include<stdio.h>
int main(void){
  long data = 1;
  int cnt = 1;

  while(1){
    data = data*2;
    printf("%ld ", data);
    if(data <= 32767)
    cnt++;
    if(data >= 32767)
    break;
  }
  printf("cnt = %d\n", cnt);
  return 0;
}
