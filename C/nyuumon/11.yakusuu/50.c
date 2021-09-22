/*約数*/

#include<stdio.h>

int main(){

  int i;
  int num;

  printf("整数入力 = ");
  scanf("%d", &num);

  printf("%d の約数は ", num);
  for(i=1; i<=num; ++i){
    if(num%i == 0)
  printf("%d ", i);
}
  printf("です。\n");

  return 0;
}
