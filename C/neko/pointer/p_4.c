#include<stdio.h>

int main(){
  struct DATA{
    int n;
    int m;
  };
  struct DATA data1 = {1, 2};
  struct DATA *data = &data1;

  printf("data->n: %d\n", data->n);
  printf("data->m: %d\n", data->m);

  return 0;
}
