/*問1(2-4)*/
#include<stdio.h>
int main(void){
  char str[] = "ABCD";

  str[0] += 32;
  str[1] += 32;
  str[2] += 32;
  str[3] = str[3] + 'a' - 'A';

  printf("str = %s\n", str);

  return 0;
}
