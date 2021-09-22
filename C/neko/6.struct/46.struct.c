#include<stdio.h>
#include<string.h>

struct Man{     //構造体Manを宣言
  char name[32];
  int age;
};

int main(){
  struct Man student;     //構造体Manをstudentとする

  strcpy(student.name, "山本一徳");     //student.nameに"山本一徳"をコピー
  student.age = 22;     //student.ageに22を代入

  printf("生徒の名前は %s です\n", student.name);
  printf("年は %d です\n", student.age);
  return 0;
}
