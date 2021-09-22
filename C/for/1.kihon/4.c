/*サンプル2-4*/
#include<stdio.h>
int main(void){
  char str1[128];
  char str2[10] = {'A', 'B', 'C'};
  char str3[] = {'a','b','c'};
  char str4[10] = "computer";
  char str5[10] = "turbo-C";

  printf("str1 = %s\n", str1);
  printf("str2 = %s\n", str2);
  printf("str3 = %s\n", str3);
  printf("str4 = %s\n", str4);
  printf("str5 = %s\n", str5);

  return 0;
}
