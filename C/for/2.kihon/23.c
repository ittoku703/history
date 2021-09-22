/*演習(6-2-1)*/
#include<stdio.h>
int main(void){
  int wa = 0;
  int i = 1;

  for(i=1; i<=100; i++){
    wa += i;
  }
  printf("和 = %d\n", wa);

  return 0;
}
