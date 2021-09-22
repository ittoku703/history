#include<stdio.h>
#include<string.h>

int main(){

  char str[] = "ABC";

  printf("str = %s\n", str);
  strcpy(str, "DEF");
  printf("str = %s\n", str);

  return 0;
}
