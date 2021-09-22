/*ポインタ引数*/
#include<stdio.h>
#include<string.h>

typedef struct {
  int year;
  int clas;
  int no;
  char name[32];
  double stature;
  double weight;
} student;

void student_print(student *data);

int main(void){
  student data;
    data.year = 3;
    data.clas = 4;
    data.no =  18;
    strcpy(data.name, "MARIO");
    data.stature = 168.2;
    data.weight = 72.4;

    student_print(&data);

    return 0;
}

void student_print(student *data){
  printf("[学年]%d\n", data->year);
  printf("[クラス]%d\n", data->clas);
  printf("[出席番号]%d\n", data->no);
  printf("[名前]%s\n", data->name);
  printf("[身長]%.2lf\n", data->stature);
  printf("[体重]%.2lf\n", data->weight);

  return;
}
