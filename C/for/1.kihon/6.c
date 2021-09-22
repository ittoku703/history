/*サンプル3-1*/
#include<stdio.h>
int main(){
  int a = 105, b = 20, c;

  printf("サンプル3-1\n");
  c = a + b;
  printf("a + b = %d\n", c);
  c = a - b;
  printf("a - b = %d\n", c);
  c = a * b;
  printf("a * b = %d\n", c);
  c = a / b;
  printf("a / b = %d\n", c);
  c = a % b;
  printf("a %% b = %d\n", c);

  a = 3;
  ++a;
  c = ++a;
  printf("前置演算子の結果: a = %d c = %d\n", a, c);

  a = 5;
  a--;
  c = a--;
  printf("前置演算子の結果: a = %d c = %d\n", a, c);

  return 0;
}
