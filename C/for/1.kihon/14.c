/*問1(5-2)*/
#include<stdio.h>
int main(void){
  int data1[4] = {1, 22, 333, 4444};
  float data2[4] = {12.34, 0.002, 5678.12, 912.1};

  printf("data1[0] = %4d\n", data1[0]);
  printf("data1[1] = %4d\n", data1[1]);
  printf("data1[2] = %4d\n", data1[2]);
  printf("data1[3] = %4d\n", data1[3]);

  printf("data2[0] = %.3f\n", data2[0]);
  printf("data2[1] = %.3f\n", data2[1]);
  printf("data2[2] = %.3f\n", data2[2]);
  printf("data2[3] = %.3f\n", data2[3]);

  return 0;
}
