/*問2(7-2)*/
#include<stdio.h>
#include<ctype.h>
int main(void){
  char str[] = "AbcDefGHijk1234lmNOP";
  int i;

  printf("(before)str = %s\n", str);

  while(str[i] != '\0'){
  str[i] = toupper(str[i]);

  ++i;
  }
  printf("(after) str = %s\n", str);
  return 0;
}
