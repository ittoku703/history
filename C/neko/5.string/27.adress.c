//4バイトづつアドレスが移動
#include<stdio.h>

int main(){
  int a[4] = {1, 2, 3, 4}, i = 0;

  do{
    printf("[%d] = %p\n", i, &a[i]);
    i++;
  }while(i <= 4);

  printf("\na = %p\n", &a);     //a[0]のアドレス

  return 0;
}
