/*入力した2つの自然数の間の素数を表示*/

#include<stdio.h>

int main(){

  int i, j;
  /*2つの自然数*/
  int num1, num2;
  /*判定フラグ*/
  int flag;

  printf("1.整数を入力してください = ");
  scanf("%d", &num1);
  printf("2.整数を入力してください = ");
  scanf("%d", &num2);

  for(i=num1; i<=num2; ++i){
    flag = 0;
    for(j=2; j<i; ++j){
      if(i%j==0){
        flag = 1;
        break;
      }
    }
    /*判定結果を出力*/
    if(flag==0 && i!=1)
    printf("%d ",i);
  }
  printf("\n");

  return 0;
}
