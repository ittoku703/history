//ごーとぅ
#include<stdio.h>
int main(void){
  int i = 10;

  START:
  if(i > 0){
    printf("%2d 回目の実行です\n", 11 - i);
    --i;
    goto START;
  }
  return 0;
}
