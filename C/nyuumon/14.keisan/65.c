/*階乗*/
#include<stdio.h>
int main(){
  int num, i;
  int c = 1;

  printf("整数入力 = ");
  scanf("%d", &num);

  for(i=1; i<=num; ++i){
    c = c * i;
}
  printf("%d の階乗は %d です\n", num, c);

  return 0;
}
