#include<stdio.h>
#include<string.h>

int main(void){
  FILE *fp;
  char fname[32];
  unsigned char c;
  int no = 0;

  printf("バイナリーファイルを入力(拡張子なし)-->");
  fp = fopen(strcat(gets(fname), ".b"), "rb");
  if(fp == NULL){
    perror("失敗\n");
    return -1;
  }
  while(fread(&c, sizeof(char), 1, fp) != 0){
    printf("%02x ", c);
    no++;
    if(no % 8 == 0)
      printf("\n");
  }
  printf("\n");
  fclose(fp);
  return 0;
}
