#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
  double *pd, *pd2, sum = 0;
  int no = 0, i;
  char szData[32];

  pd = (double *)malloc(sizeof(0));
  if(pd == NULL){
    perror("領域確保に失敗\n");
    exit(-1);
  }
  while(1){
    printf("数値入力(Eで終了)-->");
    gets(szData);
    if(strcmp(szData, "E") == 0 ||strcmp(szData, "e") == 0){
      printf("終了します\n");
      break;
    }
    pd2 = (double *)realloc(pd, sizeof(double) * (no + 1));
    if(pd2 == NULL){
      perror("領域確保に失敗\n");
      exit(-2);
    }
    pd = pd2;
    pd[no] = atof(szData);
    sum += pd[no];
    no++;
  }
  if(no){
    for(i=0; i<no; i++)
      printf("[NO.%d] %f\n", i+1, pd[i]);
    printf("合計: \t%f\n", sum);
    printf("平均: \t%f\n", sum / no);
  }
  free(pd);
  return 0;
}


/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
  char *pc;

  pc = (char *)calloc(32, sizeof(char));
  if(pc == NULL){
    perror("メモリ確保失敗\n");
    return -1;
  }
  strcpy(pc, "(((((((( ;ﾟДﾟ)))))))ﾋｨｨｨｨ");

  printf("pc = %s\n", pc);
  free(pc);

  return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>

int main(void){
  int *pi, no, i;

  printf("何個の整数値を入力しますか-->");
  scanf("%d", &no);
  pi = (int *)malloc(sizeof(int) * no);
  if(pi == NULL){
    perror("メモリ確保失敗\n");
    return -1;
  }
  for(i=0; i<no; i++){
    printf("%d個目のデータ-->", i+1);
    scanf("%d", pi + i);
  }
  printf("入力されたデータ\n");
  for(i=0; i<no; i++)
    printf("No.%d = %d\n", i+1, *(pi+i));

  return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>

int main(void){
  int *pi;
  //int型1個分のメモリブロックを確保
  pi = (int *)malloc(sizeof(int));

  if(pi == NULL){
    perror("メモリの確保失敗\n");
    return -1;
  }
  *pi = 100;

  printf("*pi = %d\n", *pi);

  free(pi);

  return 0;
}
*/
