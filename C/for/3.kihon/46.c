/*問1(7-4) * をランダムで出す(1行 80個まで)*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
  int i, j, r;

  for(i=1; i<=10; i++){
    r = rand() % 80;
    for(j=1; j<=r; j++){
      putchar('*');
    }
    printf("\n");
  }
  return 0;
}
