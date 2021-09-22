/*九九*/
#include<stdio.h>
int main(){
  int i, j;
  int c = 0;

  printf("----九九----\n");

  for(i=1; i<=9; ++i){
    printf("%d の段:", i);
    for(j=1; j<=9; ++j){
      c = i * j;
      printf("%2d ", c);
    }
    printf("\n");
  }

  return 0;
}
