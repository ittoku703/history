//さいずおふ
#include<stdio.h>
int main(void){
  char c = 'A';
  short s = 50;
  unsigned int ui = 128;
  float f = 0.5f;
  double d = 2568.2;
  long double ld = 1.258E-25;
  size_t sz;

  sz = sizeof c;
  printf("size of char = %zu バイト\n", sz);
  sz = sizeof s;
  printf("size of short = %zu バイト\n", sz);
  sz = sizeof ui;
  printf("size of unsigned int = %zu バイト\n", sz);
  sz = sizeof f;
  printf("size of float = %zu バイト\n", sz);
  sz = sizeof d;
  printf("size of double = %zu バイト\n", sz);
  sz = sizeof ld;
  printf("size of long double = %zu バイト\n", sz);
  sz = sizeof(size_t);
  printf("size of size_t = %zu バイト\n", sz);

  return 0;
}
