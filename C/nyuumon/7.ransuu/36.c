#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){

  int i;

  srand(time(NULL));

  printf("¥ 3つの乱数を生成\n");
  for(i=0; i<3; i++)
  printf("%dつ目の乱数 = %d\n", i+1, rand());

  return 0;
}
