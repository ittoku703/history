#include<stdio.h>
#include<string.h>

int main(void){
  FILE *fp;
  char *str = "ABC";
  int a[3] = {1, 2, 3};

  fp = fopen("mybinary.b", "wb");
  if(fp == NULL){
    perror("失敗\n");
    return -1;
  }
  fwrite(str, sizeof(char), strlen(str), fp);
  fwrite(a, sizeof(int), 3, fp);
  fclose(fp);
  printf("ファイルに書き込みました\n");
  return 0;
}
