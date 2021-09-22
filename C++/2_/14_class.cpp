#include<iostream>
using std::cout;

class CAR {
public:
  int num;
  double gas;
  void show();
};

void CAR::show(){
  cout <<"車のナンバー: "<< num <<'\n';
  cout <<"ガソリン容量: "<< gas <<"\n";
}

int main(void){
  CAR mycar;
  mycar.num = 1234;
  mycar.gas = 30.5;
  mycar.show();

  return 0;
}
