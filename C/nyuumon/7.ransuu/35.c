#include<stdio.h>
#include<stdlib.h>

int main(){

  int i;

  /*乱数を生成*/
  printf("¥ 3つの乱数を生成\n");
  for(i=0; i<3; i++)
  printf("%dつ目の乱数 = %d\n", i+1, rand());

  /*乱数の最大値を表示*/
  i = RAND_MAX;
  printf("\n¥ 乱数の最大値を表示\n");
  printf("RAND_MAX = %d\n", i);

  return 0;
}
