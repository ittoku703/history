/*問2(6-2-1)*/
#include<stdio.h>
int main(void){
  int a[5];
  int i;

  printf("a[] = ");

  for(i=0; i<5; i++){
    a[i] = i * 2;
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}
