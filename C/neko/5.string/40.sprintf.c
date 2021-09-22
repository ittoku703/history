/*sprintfは使う頻度が多いほど便利*/
#include<stdio.h>
#include<string.h>

int main(){

  char buffer[128], name[32];
  int age;
  double bl, bw;

  while(1){
    printf("氏名-->");
    gets(name);
    if(!strcmp(name, "")){
      printf("氏名が入力されていません\n");
      continue;
    }
    break;
  }
  while(1){
    printf("年齢-->");
    scanf("%d", &age);
    if((age < 0)||(age > 100)){
      printf("年齢が正しく入力されていません\n");
      continue;
    }
    break;
  }
  while(1){
    printf("身長(cm)-->");
    scanf("%lf", &bl);
    if((bl < 0.0)||(bl > 250.0)){
      printf("身長の値が不適切です\n");
      continue;
    }
    break;
  }
  while(1){
    printf("体重(kg)-->");
    scanf("%lf", &bw);
    if((bw < 0.0)||(bw > 200.0)){
      printf("体重の値が不適切です\n");
      continue;
    }
    break;
  }
  sprintf(buffer, "\n%s さん(年齢は %d 歳)のプロフィール\n"
    "身長は %5.1lfcm 、体重は %5.1lfkg 、BMIは %5.1lf です\n",
    name, age, bl, bw, bw * 10000.0 / (bl * bl));
  printf("%s", buffer);

  return 0;
}
