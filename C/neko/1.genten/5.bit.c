//でふぁいんと２しんすう
#define CAT     1  //2進数で0000 0001
#define DOG     2  //2進数で0000 0010
#define RAT     4  //2進数で0000 0100
#define RABBIT  8  //2進数で0000 1000

#include<stdio.h>
int main(void){
  int a = CAT | DOG;  //2進数で0000 0011
  int b = RAT;        //2進数で0000 0100
  int c = CAT | RAT | DOG | RABBIT;//2進数で0000 1111
  int d = DOG | RAT;  //2進数で0000 0110

  printf("Aさんのペット(猫 %d, 犬 %d, ネズミ %d, うさぎ%d)\n",
  (a & CAT)!=0, (a & DOG)!=0, (a & RAT)!=0, (a & RABBIT)!=0);
  printf("Bさんのペット(猫 %d, 犬 %d, ネズミ %d, うさぎ%d)\n",
  (b & CAT)!=0, (b & DOG)!=0, (b & RAT)!=0, (b & RABBIT)!=0);
  printf("Cさんのペット(猫 %d, 犬 %d, ネズミ %d, うさぎ%d)\n",
  (c & CAT)!=0, (c & DOG)!=0, (c & RAT)!=0, (c & RABBIT)!=0);
  printf("Dさんのペット(猫 %d, 犬 %d, ネズミ %d, うさぎ%d)\n",
  (d & CAT)!=0, (d & DOG)!=0, (d & RAT)!=0, (d & RABBIT)!=0);

  return 0;
}
