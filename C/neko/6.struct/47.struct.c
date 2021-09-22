#include<stdio.h>

struct DATA {
  int data1;
  char data2;
  char data3[32];
};

int main(){
  struct DATA mydata = {10, 'A', "cat"};     //DATAのMydataに一気に格納
  printf("%d, %c, %s\n",
  mydata.data1, mydata.data2, mydata.data3);

  return 0;
}
