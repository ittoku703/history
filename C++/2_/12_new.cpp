#include<iostream>
using std::cout;
using std::cin;

int main(void){
  int num, *ptr;

  cout <<"点数を入力する人数を入力: ";  cin >> num;
  ptr = new int[num];

  for(int i=0; i<num; i++){
    cout <<"点数を入力-->";  cin >> ptr[i];
  }
  for(int i=0; i<num; i++)
    cout << i+1 <<" 番目の点数は"<< ptr[i] <<"です\n";

  delete[] ptr;
  return 0;

}

/*
//メモリの節約
#include<iostream>

int main(void){
  int *ptr;
  ptr = new int;  //メモリの確保

  *ptr = 10;
  std::cout <<"動的に確保したメモリをを使って"<< *ptr <<"を使用\n";

  delete ptr;
  std::cout <<"メモリを解放\n";

  return 0;
}
*/
