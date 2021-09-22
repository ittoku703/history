//n階乗
#include<stdio.h>

int kaijo(int);

int main(void){
  int i;
  for(i=0; i<11; i++){
    printf("%d! = %d\n", i, kaijo(i));
  }
  return 0;
}
int kaijo(int x){
  if(x == 0)
  return 1;
  else
  return x * kaijo(x - 1);
}
