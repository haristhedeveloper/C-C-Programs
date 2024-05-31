#include<iostream>
using namespace std;

class vehicle{
  public:
  string name="Audi";
  void func(){
      cout<<"My car is superb";
  }
};

class Audi:public vehicle{
    public:
    int price=15000000;
};
int main(){
    
    Audi obj;
    // in the upper line we only make the object of audi class but in the output we get attributes and methods of the vehicle class 
    cout<<"My car name is "<<obj.name<<" and its price is :"<<obj.price<<" and ";
    obj.func();
}
