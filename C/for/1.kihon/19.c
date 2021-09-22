/*問2(6-1-1)*/
#include<stdio.h>
int main(void){
  char ch;

  printf("文字入力 = ");
  scanf("%c", &ch);

  if(ch>='A' && ch<='Z'){
    ch += ('a' - 'A');
  }
  printf("ch = %c\n", ch);

  return 0;
}
