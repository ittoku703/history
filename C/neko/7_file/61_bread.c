#include<stdio.h>
#include<string.h>

int main(void){
  FILE *fp;
  int a[3];
  char buf[8];

  memset(buf, '\0', sizeof(buf[8]));

  fp = fopen("mybinary.b", "rb");
  fread(buf, sizeof(char), 3, fp);
  fread(a, sizeof(int), 3, fp);
  fclose(fp);
  printf("%s %d %d %d\n", buf, a[0], a[1], a[2]);
  return 0;
}
