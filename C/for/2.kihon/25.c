/*問1(6-2-2)*/
#include<stdio.h>
int main(void){
  int n;
  int i;

  for(n=0; n<10; n++){
    for(i=1; i<=n; i++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
