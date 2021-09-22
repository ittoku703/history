#include<stdio.h>
#include<time.h>

int main(void){
  time_t orgtime;
  struct tm *lpmytm;
  char *today;

  orgtime = time(NULL);
  lpmytm = localtime(&orgtime);

  printf("現在時刻は %02d時 %02d分 %02d秒 です\n",
    lpmytm->tm_hour, lpmytm->tm_min, lpmytm->tm_sec);
  printf("今日は %0d年 %02d月 %02d日です\n",
    lpmytm->tm_year + 1900, lpmytm->tm_mon + 1,
    lpmytm->tm_mday);
  today = asctime(lpmytm);
  printf("%s", today);

  return 0;
}
