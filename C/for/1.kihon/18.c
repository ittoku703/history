/*問1(6-1-1)*/
#include<stdio.h>
int main(void){
  int a, b;

  printf("a に整数入力 = ");
  scanf("%d", &a);
  printf("b に整数入力 = ");
  scanf("%d", &b);

  if(a>=10)
  printf("a は10より大きい\n");
  else
  printf("a は10より小さい\n");

  if(a==b)
  printf("a と b は等しい\n");

  if(b>=10)
  printf("b は10以上\n");
  else{
    a += 1;
    b += 1;
    printf("b は10以下\n");
  }
  printf("a = %d  b = %d\n",a, b);

  return 0;
}
