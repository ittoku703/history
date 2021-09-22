/*問4(6-3-1)*/
#include<stdio.h>
int main(void){
  int i, n = 0;

  while(n < 10){
    i = 0;
    while(i <= n){
      printf("%d", i);
      i++;
    }
    printf("\n");
    n++;
  }
  return 0;
}
