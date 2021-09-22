#include<iostream>
using std::cout;
using std::cin;

class Car {
private:
  int num;
  float gas;
public:
  static int sum;
  Car();
  void set_Car(int n, float g);
  void show();
  static void showsum();
};

Car::Car(){ sum++;  cout <<"車のデータ "<< sum <<'\n'; }
void Car::showsum(){ cout <<"車は合計 "<< sum <<" 台\n\n"; }
void Car::show(){ cout <<"ナンバーは "<< num <<"\nガソリン容量は "<< gas <<'\n'; }

void Car::set_Car(int n, float g){     //引数あり
  num = n;  gas = g;
  cout <<"Number: "<< num <<"  gas: "<< gas <<'\n';
}

int Car::sum = 0;

int main(void){
  Car kuruma_Data1;
  kuruma_Data1.set_Car(1010, 50.5);
  kuruma_Data1.show();
  Car::showsum();

  Car kuruma_Data2;
  kuruma_Data2.set_Car(4649, 46.49);
  kuruma_Data2.show();
  Car::showsum();

  return 0;
}
