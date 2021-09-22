#include<stdio.h>

int showch(int, char **);
char *ch[] = {
  "jun", "feb", "mar", "apl",
  "may", "june", "july", "aug",
  "sep", "oct", "nov", "dec" };

int main(int argc, char *argv[]) {
  int n = argc;
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
