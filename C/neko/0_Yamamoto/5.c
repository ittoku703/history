#define FNAME "test.txt"
#define RECORDLEN 60

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char ans[4];

int write();
int read();

int main(void){
  int no;

  printf("\n1.書き込む\n");
  printf("2.読み込む\n");
  printf("0.終了\n");
  while(1){
    printf("選択-->");
    gets(ans);
    no = atoi(ans);
    switch(no){
      case 0: break;
      case 1: write(); break;
      case 2: read(); break;
      default : printf("入力ミス\n");
        break;
    }
  if(!no) break;
  }
  return 0;
}

int write(){
  FILE *fp;
  char name[32], address[32], tel[16], yesno[8];
  char *format = "%-20s, %-20s, %-15s\n";

  fp = fopen(FNAME, "a");
  if(fp == NULL){
    perror("失敗\n");
    return -1;
  }
  while(1){
    printf("氏名-->");
    gets(name);
    printf("住所-->");
    gets(address);
    printf("電話番号-->");
    gets(tel);
    fprintf(fp, format, name, address, tel);

    printf("さらに保存しますか(yes/no): ");
    gets(yesno);
    if(yesno[0] == 'n' || yesno[0] == 'N')
      break;
  }

  fclose(fp);
  return 0;
}

int read(){
  FILE *fp;
  char name[32], address[32], tel[16],
       search[32], yesno[8], konma[4];
  int no = 0;

  fp = fopen(FNAME, "r");
  if(fp == NULL){
    perror("失敗\n");
    return -1;
  }

  while(1){
    printf("名前を検索-->");
    gets(search);
    fseek(fp, RECORDLEN * no++, SEEK_SET);
    if(fscanf(fp, "%s", name) == EOF)
      break;
    if(strstr(search, name) != NULL){
      fscanf(fp, "%s", konma);     //コンマ
      fscanf(fp, "%s", address);
      fscanf(fp, "%s", konma);     //コンマ
      fscanf(fp, "%s", tel);
      printf("[氏名]: %s\n", name);
      printf("[住所]: %s\n", address);
      printf("[電話番号]: %s\n", tel);
    }
    printf("さらに検索しますか(yes/no): ");
    gets(yesno);
    if(yesno[0] == 'y' || yesno[0] == 'Y')
      continue;
     else
       break;
  }
  fclose(fp);
  return 0;
}
