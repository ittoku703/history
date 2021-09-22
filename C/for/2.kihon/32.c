/*問1(6-4-1)*/
#include<stdio.h>
int main(void){
  int data1 = 1000;
  int data2;  //入力

  do{
    printf("整数値入力 = ");
    scanf("%d", &data2);

    data1 -= data2;
    printf("%d\n", data1);
  }while(data1>0);

  return 0;
}
