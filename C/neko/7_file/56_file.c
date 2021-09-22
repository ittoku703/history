#include<stdio.h>
#include<string.h>

int mywrite(FILE *);

int main(void){
  FILE *fp;
  char filename[256];

  printf("ファイル名入力-->");
  gets(filename);
  strcat(filename, ".txt");

  fp = fopen(filename, "a");     //追加モード
  if(fp == NULL){
    perror("ファイルオープンに失敗したぁ\n");
    return -1;
  }
  while(!mywrite(fp));

  fclose(fp);
  return 0;
}

int mywrite(FILE *f){
  char name[32];
  char tel[16];
  char yesno[8];

  printf("氏名-->");
  gets(name);
  printf("電話番号-->");
  gets(tel);

  printf("%-15s %-15s\n", name, tel);
  printf("このデータを書き込みますか(y/n):");
  gets(yesno);
  if(strcmp(yesno, "Y")==0 || strcmp(yesno, "y")==0)
    fprintf(f, "%-15s, %-15s\n", name, tel);

  printf("さらにデータを書き込みますか(y/n)");
  gets(yesno);
  if(strcmp(yesno, "n")==0 || strcmp(yesno, "N")==0)
    return -1;

  return 0;
}
