/*
#include<stdio.h>

int main(){
  char *str;
  str = "ABC";

  printf("*(str + 0) = %c\n", *(str + 0));
  printf("*(str + 1) = %c\n", *(str + 1));
  printf("*(str + 2) = %c\n", *(str + 2));

  printf("str[0] = %c\n", str[0]);
  printf("str[1] = %c\n", str[1]);
  printf("str[2] = %c\n", str[2]);

  return 0;
}
*/
#include<stdio.h>

int main(){

  printf("%c, %c, %c\n",
  *("ABC" + 0), *("ABC" + 1), *("ABC" + 2));

  printf("%c, %c, %c\n", "ABC"[0], "ABC"[1], "ABC"[2]);

  return 0;
}
