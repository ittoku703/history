#include<stdio.h>

typedef struct _tagdata{     //struct _tagdata = DATA
  char name[32];
  int age;
  struct _tagdata *nextdata;
} DATA;

int main(void){
  DATA a = {"粂井", 28, },
       b = {"田中", 35, },
       c = {"鈴木", 18, };
  DATA *lpdata;     //

  a.nextdata = &b;
  b.nextdata = &c;
  c.nextdata = NULL;

  for(lpdata = &a; lpdata; lpdata = lpdata->nextdata)
  printf("%s (%d歳)\n", lpdata->name, lpdata->age);

  return 0;
}
