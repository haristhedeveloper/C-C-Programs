#include<iostream>
using namespace std;

// multiple inheritance like one class inherit multiple classes

class haris{
    public:
  void quote(){
      cout<<"Always be positive"<<endl;
  }  
};

class atiq{
     public:
  void quot(){
      cout<<"Think before speak";
  }  
};

class abdulmajeed: public atiq , public haris{
};

int main(){
    abdulmajeed abd;
    abd.quote();
    abd.quot();
}
