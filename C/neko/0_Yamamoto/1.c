#include<stdio.h>

int showchar(char[]);

int main(void){
  char str[32];

  printf("大文字を小文字に変換する\t\n");
  printf("文字列入力-->");
  scanf("%s", str);
  showchar(str);
  return 0;
}

int showchar(char ch[]){
  int i;
  while(ch[i] != '\0'){
    if(ch[i] >= 'A' && ch[i] <= 'Z')
    printf("%c", ch[i]+32);
    else
    printf("%c", ch[i]);
    i++;
  }
  printf("\n");
  return 0;
}
