#define PAN "パン食い競争"
#define KYO "100m競争"
#define NO 6     //人数

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {     //structはname, kyougi, tm, juniをDATAに
  char name[32];
  char kyougi[32];
  union {     //unionはtm, juniをseisekiに
    double tm;
    int juni;
  } seiseki;
} DATA, *LPDATA;     //ポインタのDATA

int myinput(LPDATA, char *, char *, char *);

int main(void){
  DATA data[NO];
  LPDATA lpdata;
  int i;

  lpdata = data;

  myinput(lpdata + 0, "田中", PAN, "1");     //田中 パン 1位
  myinput(lpdata + 1, "佐藤", KYO, "20.5");     //佐藤 100m 20.5秒
  myinput(lpdata + 2, "太田", PAN, "2");     //太田 パン 2位
  myinput(lpdata + 3, "加藤", PAN, "4");     //加藤 パン 4位
  myinput(lpdata + 4, "粂井", KYO, "15.2");     //粂井 100m 15.2
  myinput(lpdata + 5, "鈴木", PAN, "3");     //鈴木 パン 3位

  printf("  氏名  競技              成績\n");
  printf("------------------------\n");
  for(i=0; i<NO; i++){
    printf("  %s  %-14s      ", data[i].name, data[i].kyougi);
    if(strcmp(data[i].kyougi, "100m競争") == 0) {
      printf("%.2lf秒\n", data[i].seiseki.tm);
    } else {
      printf("%d位\n", data[i].seiseki.juni);
    }
  }
  return 0;
}

int myinput(LPDATA p, char *nm, char *kg, char *sk){
  strcpy(p->name, nm);
  strcpy(p->kyougi, kg);
  if(!strcmp(kg, PAN))
  p->seiseki.juni = atoi(sk);
  else
  p->seiseki.tm = atoi(sk);

  return 0;
}
