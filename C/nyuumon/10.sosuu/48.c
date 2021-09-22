/*1000までの素数*/

#include<stdio.h>

int main(){

  int i, j;
  /*判定フラグ*/
  int flag;

  printf("1000までの素数表示\t\n");

  for(i=2; i<=1000; ++i){
    flag = 0;
    for(j=2; j<i; ++j){
      if(i%j==0){
        flag = 1;
        break;
      }
    }
    /*判定結果を出力*/
    if(flag==0)
    printf("%d ", i);
    }
    return 0;
  }
