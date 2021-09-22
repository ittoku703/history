/*問1(6-5-1)*/
#include<stdio.h>
int main(void){
  int num1, num2, tmp;
  int kekka = 0;
  char n;

  printf("計算方法を入力(+, -, *, /) = ");
  scanf("%c", &n);
  printf("1.整数値入力 = ");
  scanf("%d", &num1);
  printf("2.整数値入力 = ");
  scanf("%d", &num2);

  if(num1<num2){
    tmp = num1;
    num1 = num2;
    num2 = tmp;
  }

  switch(n){
    case  '+':
    kekka = num1 + num2;
    break;
    case  '-':
    kekka = num1 - num2;
    break;
    case  '*':
    kekka = num1 * num2;
    break;
    case  '/':
    kekka = num1 / num2;
    break;
    default:
    printf("計算方法のエラーです\n");
    break;    
  }
  printf("%d %c %d = %d\n",num1, n, num2, kekka);

  return 0;
}
