/*閏年*/
//1.　4で割り切れる年は閏年
 //2. 100で割り切れる年は閏年ではない
  //3.400で割り切れる年は閏年
#include<stdio.h>
int main(){

  int num;

  int sum = 0;

  printf("年数を入力 ");
  scanf("%d", &num);

  if(num%4 == 0){
    sum = 0;
    if(num%100 == 0)
    sum = 1;
    if(num%400 == 0)
    sum = 0;
  }
  if(sum == 0)
  printf("%d 年は閏年です\n", num);
  else
  printf("%d 年は閏年じゃなーい\n", num);

  return 0;
}
