
#include<iostream>
using std::string;
using std::cout;
using std::cin;

class Yamamoto {
private:
  string name;
  int age;
public:
  Yamamoto();
  void Output();
};

Yamamoto::Yamamoto(){
  cout << "名前を入力: ";  cin >> name;
  cout << "年齢を入力: ";  cin >> age;
}

void Yamamoto::Output(){
  cout <<"名前: " <<name <<"\n年齢: " <<age <<"\n";
}

int main(void) {
  Yamamoto yamamoto;
  yamamoto.Output();

  return 0;
}
