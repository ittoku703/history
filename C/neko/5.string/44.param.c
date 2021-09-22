#include<stdio.h>

int showname(char **);

int main(void){

  char *name[] = {
    "芥川龍之介",
    "イチロー",
    "ライター",
    "overlord"
  };
  showname(name);

  return 0;
}
int showname(char **p){
  int i;
  for(i=0; i<4; i++){
    printf("name[%d] = %s\n", i, p[i]);
  }
  return 0;
}
