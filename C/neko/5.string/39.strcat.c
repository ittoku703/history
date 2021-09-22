#include<stdio.h>
#include<string.h>

int main(){

  char name[64], sama[] = "様";
  printf("名前を入力-->");
  gets(name);
  printf("%s で御座いますね。では、こちらに\n",
  strcat(name, sama));

  return 0;
}
