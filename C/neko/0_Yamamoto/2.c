#include<stdio.h>

int showch(int, char **);
char *ch[] = {
  "jun", "feb", "mar", "apl",
  "may", "june", "july", "aug",
  "sep", "oct", "nov", "dec" };

int main(void){
  int n;
  printf("数字の月を表示\n数字入力-->");
  scanf("%d", &n);
  showch(n, ch);
  printf("\n");
  return 0;
}

int showch(int n, char **ch){
    if(n <= 0 || n >= 13)
    printf("入力ミスです\n");
    else
    printf("%d = %s", n, ch[n-1]);

    return 0;
}
