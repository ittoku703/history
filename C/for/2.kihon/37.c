/*問1(6-7-1)*/
#include<stdio.h>
int main(void){
  float data1 = 100.0;
  float data2;
  int i = 1;

  while(i <= 10){
    printf("%d.浮動小数点を入力 = ", i);
    scanf("%f", &data2);
    data1 /= data2;
    if(data2 == 0.0){
      continue;
    }
    if(data1 <= 1){
      break;
    }
    printf("%f\n", data1);
    i++;
  }
  return 0;
}
