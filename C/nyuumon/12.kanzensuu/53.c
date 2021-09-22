/*完全数*/
#include<stdio.h>
int main(void){

  int  i, num;
  int sum = 0;

  printf("自然数入力 = ");
  scanf("%d", &num);

  for(i=1; i<num; ++i){
    if(num % i == 0)
    sum += i;
  }
  if(num == sum)
  printf("%d は完全数です\n", num);
  else
  printf("%d は完全数じゃなーい\n", num);

  return 0;
}
