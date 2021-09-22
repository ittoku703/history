#include<stdio.h>

int main(void){
  int a[] = {1, 5, 20, 100}, i;

  for(i=0; i<4; i++){
    printf("[%d] = %d\n", i, a[i]);
  }

  return 0;
}
//簡単に、わかりやすくする
/*
#include<stdio.h>
int main(void){
  int a[4];

  a[0] = 1;
  a[1] = 5;
  a[2] = 20;
  a[3] = 100;

  printf("[0] = %d [1] = %d [2] = %d [3] = %d\n"
         , a[0], a[1], a[2], a[3]);

  return 0;
}
*/
