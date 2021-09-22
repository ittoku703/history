#include<iostream>
using std::cout;
using std::cin;

class Car {
private:
  int num;
  float gas;
public:
  Car();
  void set_Car(int , float);
};
class RcCar : public Car {
private:
  int course;
public:
  RcCar();
  void set_Course(int);
};

Car::Car(){ cout <<"車のデータ\n"; }
void Car::set_Car(int n, float g){
  num = n;  gas = g;
  cout <<"Number: "<< num <<"  gas: "<< gas <<'\n';
}

RcCar::RcCar(){ cout <<"レーシングカーのデータ\n"; }
void RcCar::set_Course(int c){
  course = c;
  cout <<"コース番号: "<< course <<'\n';
}

int main(){
  RcCar rccar;
  rccar.set_Car(1234, 12.34);
  rccar.set_Course(5);

  return 0;
}
