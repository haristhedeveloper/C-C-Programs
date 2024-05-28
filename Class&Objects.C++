
#include <iostream>
using namespace std;

class Car {
    public:
  string company;
  int model;
  string color;
  int price;
};
int main() {
   
  Car ob;
  ob.company="Toyota";
  ob.model=2024 ;
  ob.color="White";
  ob.price=7500000;
  
  
  cout<<ob.company<<"\n"<<ob.model<<"\n"<<ob.color<<"\n"<<ob.price;
}
