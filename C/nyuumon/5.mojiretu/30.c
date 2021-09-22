#include<stdio.h>
#include<string.h>

int main(){

  int len;
  char s1[100], s2[100], s3[100];

  //文字列を代入
  strcpy(s1, "ABC");
  strcpy(s2, "XYZ");
  printf("s1 = %s, s2 = %s\n", s1, s2);

  //文字列を連結
  strcat(s1, s2);
  printf("s1 + s2 = %s\n", s1);

  //文字列の長さを取得
  len = strlen(s2);
  printf("s2の長さ %d\n", len);

  //文字列を比較
  strcpy(s3, "XYZ");
  printf("s2 s3 の比較 %d\n", strcmp(s2, s3));
  printf("s1 s2 の比較 %d\n", strcmp(s1, s2));

  return 0;
}
