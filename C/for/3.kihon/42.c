/*文字処理関数　問1(7-2)*/
#include<stdio.h>
#include<ctype.h>
int main(void){
  int i;

  for(i=' '; i<='~'; i++){
    if(isalnum(i))
    printf("%c ", i);
    else
    printf("[%c]", i);
  }
  printf("\n");
  return 0;
}
