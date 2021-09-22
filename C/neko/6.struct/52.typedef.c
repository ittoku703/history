#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct DATA {     //struct DATA =  MYDATA
  char name[32];          //struct DATA = LPMYDATA(ポインタは別)
  char tel[32];           //複数定義することができる
} MYDATA, *LPMYDATA;

int menu();
int meibo_input(LPMYDATA);
int meibo_output(LPMYDATA);

int main(){
  int selectno, loopend = 0;

  MYDATA mydata[10];      //配列[10]追加
  LPMYDATA lpmydata = mydata;

  memset(mydata, '\0', sizeof(MYDATA[10]));     //mydataをNULLでMYDATA[10で埋める]

  while(1){
    selectno = menu();     //関数nemuをselectnoに代入

    switch(selectno){     //(menu())でも出力される
      case 1:
      meibo_input(lpmydata); break;
      case 2:
      meibo_output(lpmydata); break;
      default:
      loopend = 1; break;
    }
    if(loopend)     //loopendが真(0以外)だったら
    break;
  }
  return 0;
}

int menu(void){
  char ret[8];
  printf("****** MENU ******\n");
  printf("1:データ入力\n");
  printf("2.データ表示\n");
  printf("0:終了\n");
  printf("******************\n\n");
  gets(ret);

  return atoi(ret);     //文字列を整数に変換
}
int meibo_input(LPMYDATA lpdata){
  char strno[8];
  int no;

  printf("何番のデータを入力しますか？(0-9)--");
  gets(strno);
  if(strno[0] < '0' || strno[0] > '9'){
    printf("入力が不正です\n");
    return -1;
  }
  strno[1] = '\0';
  no = atoi(strno);

  printf("氏名-->");
  gets((lpdata + no)->name);     //lpdataのno(場所)の名前
  printf("電話番号-->");
  gets((lpdata + no)->tel);

  return 0;
}

int meibo_output(LPMYDATA lpdata){
  char strno[8];
  int no;

  printf("何番のデータを読み出しますか？(0-9)--");
  gets(strno);
  if(strno[0] < '0' || strno[0] > '9'){
    printf("入力が不正です\n");
    return -1;
  }
  strno[1] = '\0';
  no = atoi(strno);

  if(! strcmp((lpdata + no)->name, "")){     //lpdata + noのnameが\0だったら
    printf("データがありません\n");
    return -1;
  }
  printf("氏名-- %s\n", (lpdata + no)->name);
  printf("電話番号-- %s\n", (lpdata + no)->tel);

  return 0;
}
