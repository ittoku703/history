#include<stdio.h>

typedef struct {
  char name[32];
  int age;
} DATA;

int func(DATA *data);

int main(void){
  DATA data;

  func(&data);

  return 0;
}

int func(DATA *data){
  printf("名前を入力-->");
  gets(data->name);
  printf("年齢を入力-->");
  scanf("%d", &data->age);
  printf("名前: %s  年齢: %d\n", data->name, data->age);

  return 0;
}
