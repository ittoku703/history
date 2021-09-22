/*問2(6-3-1)*/
#include<stdio.h>
int main(void){
  int wa = 0;
  int data;

  while(data!=0){
    printf("整数値入力 = ");
    scanf("%d", &data);
    wa += data;
  }
  printf("wa = %d\n", wa);

  return 0;
}
