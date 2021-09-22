/*問3(6-2-2)*/
#include<stdio.h>
int main(void){
  int n, i;
  int kotae;

  printf(" * * * 九九の表 * * *\n");
  printf("    |  1  2  3  4  5  6  7  8  9\n");
  printf("--------------------------------\n");
  for(n=1; n<10; n++){
    printf("%4d|", n);
    for(i=1; i<=9; i++){
      kotae = i * n;
      printf("%3d", kotae);
    }
    printf("\n");
  }
  return 0;
}
