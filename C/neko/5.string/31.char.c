#include<stdio.h>

int main(){
  char c;

  for(c='!'; c<='~'; c++){
    printf("%3d(0x%2x) -- %c", c, c, c);
    if((c-'!'+1) % 4 == 0)     //ここで改行
    printf("\n");
  }
  printf("\n");
  return 0;
}
