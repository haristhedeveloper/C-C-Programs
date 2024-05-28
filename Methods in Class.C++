// in this program we use methods inside the class and outside the class 

#include<iostream>
using namespace std;

// inside the class 
class Car{
    public:
    void speed(){
        cout<<"The speed of my car is 240km/h"<<endl;
    };
};


// outside the class
class Bike{
    public:
  void speed(); 
};

void Bike::speed(){
    cout<<"The speed of my bike is 100 km/h";  
}
    
    int main(){
        Car myobj;
        myobj.speed();
        
        Bike myObj;
        myObj.speed();
        
}


