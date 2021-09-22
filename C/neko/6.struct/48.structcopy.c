#include<stdio.h>

int main(){
  struct DATA {
    int x;
    int y;
  } a = {10, 20}, b;

  b = a;     //この方法でも構造体をコピーできる

  printf("x = %d, y = %d\n", b.x, b.y);

  return 0;
}
