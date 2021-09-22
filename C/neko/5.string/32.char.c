#include<stdio.h>

int main(void){
  char c;

  for(c='A'; c<='z'; c++){
    if((c>='A' && c<='Z')||(c>='a' && c<='z'))
    printf("%c ", c);
    if(c == 'Z')         //改行
    printf("\n");
  }
  printf("\n");
  return 0;
}
