#include<iostream>
using namespace std;

// multilevel like more than one level of inheritance 

class haris{
    public:
  void quote(){
      cout<<"Always be positive";
  }  
};

class atiq: public haris{
};

class abdulmajeed: public atiq{
};

int main(){
    abdulmajeed abd;
    abd.quote();
}
