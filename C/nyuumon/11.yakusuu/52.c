/*最小公倍数*/
#include<stdio.h>
int main(void){

  int a, b, r, x, tmp;

  printf("2つの自然数を入力\n");
  printf("1.自然数入力 = ");
  scanf("%d", &a);
  printf("2.自然数入力 = ");
  scanf("%d", &b);

  x = a * b;

  if(a<b){
    tmp = b;
    b = a;
    a = tmp;
  }

  r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
  printf("最小公倍数は %d です\n", x/b);

  return 0;
}
