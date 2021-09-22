#define STUDENTNO 5
#define SUBJECTNO 3
#include<stdio.h>

int drawline(void);

typedef struct SEISEKI {
  char name[32];
  int kokugo;
  int suugaku;
  int eigo;
} DATA;

int main(){
  DATA myclass[STUDENTNO] = {
    "田中", 80, 80, 55,
    "佐藤", 75, 90, 70,
    "太田", 50, 45, 30,
    "鈴木", 100, 55, 90,
    "加藤", 60, 85, 35
  };
  int i, sum0 = 0, sum1[SUBJECTNO], sum2[STUDENTNO];

  for(i=0; i<STUDENTNO; i++){
    sum1[0] += myclass[i].kokugo;
    sum1[1] += myclass[i].suugaku;
    sum1[2] += myclass[i].eigo;
  }
  for (i=0; i<STUDENTNO; i++)
  sum2[i] = myclass[i].kokugo + myclass[i].suugaku + myclass[i].eigo;
  for(i=0; i<STUDENTNO; i++)
  sum0 += sum2[i];


  printf("*****  点数  *****\n\n");

  printf("%s   %s   %s   %s   %s\n",
  "氏名", "国語", "数学", "英語", "合計");

  drawline();

  for(i=0; i<STUDENTNO; i++)
  printf("%s %6d %6d %6d %6d\n", myclass[i].name, myclass[i].kokugo,
  myclass[i].suugaku, myclass[i].eigo, sum2[i]);

  drawline();

  printf("%s   %6.1lf %6.1lf %6.1lf %6.1lf\n", "平均",
  (double)sum1[0] / STUDENTNO,
  (double)sum1[1] / STUDENTNO,
  (double)sum1[2] / STUDENTNO,
  (double)sum0 / STUDENTNO);
  return 0;
}

int drawline(void){
  int i;
  for(i=0; i<35; i++)
  printf("-");

  printf("\n");

  return 0;
}
