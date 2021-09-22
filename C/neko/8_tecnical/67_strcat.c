#include<stdio.h>
#include<stdarg.h>
#include<string.h>

char *strcat1(char *, ...);     //strcat()ではダ〜メ

int main(void){
  char str1[256] = "今日は、いい天気ですが";     //多めにとる
  char *str2 = "明日はどうなるかわかりません ";
  char *str3 = "(´･ω･`)ｼｮﾎﾞｰﾝ\n";

  strcat1(str1, str2, str3, "");     //NULLで終了
  printf("%s", str1);

  return 0;
}

char *strcat1(char *p, ...){
  va_list ptr;
  char *st;

  if(p[0] == '\0')
    return p;

  va_start(ptr, p);
  while(1){
    st = va_arg(ptr, char *);
    if(st[0] == '\0')
      break;
    strcat(p, st);
  }
  va_end(ptr);

  return p;
}
