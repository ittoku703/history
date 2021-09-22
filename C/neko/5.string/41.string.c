/*
#include<stdio.h>

int main(void){
  char *str[7] = {
    "ABCD", "EFG",
    "HIJK", "LMN",
    "OPQR", "STU",
    "VWXYZ"
  };
  int i;
  for(i=0; i<7; i++){
    printf("%s ", str[i]);
  }
  printf("\n");
  return 0;
}
*/
#include<stdio.h>

int main(void){
  char *str[7] = {     //文字列のポインタなら複数格納できる
    "ABCD", "EFG",
    "HIJK", "LMN",
    "OPQR", "STU",
    "VWXYZ"
  };
  int i;
  for(i=0; i<7; i++){
    printf("%p\n", &str[i]);     //8バイトづつ格納
  }
  return 0;
}
