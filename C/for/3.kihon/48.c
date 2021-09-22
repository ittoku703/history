/*問1(8-1)*/
#include<stdio.h>
#include<ctype.h>
int main(void){
  int ch, i;
  int alpcnt[26] = {0};
  printf("文字を入力しなさい = ");

  while((ch = getchar()) != '0'){
    if(isupper(ch) != 0){
      alpcnt[ch-'A']++;
    }
    else if(islower(ch) != 0){
      alpcnt[ch-'a']++;
    }
  }
  for(i=0; i<26; i++){
    printf("%c : %3d個入力\t\t", 'a'+i, alpcnt[i]);
    if(i%3 == 2)
    putchar('\n');
  }
  printf("\n");
  return 0;
}
