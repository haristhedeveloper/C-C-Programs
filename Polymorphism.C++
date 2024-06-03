// in polymorphism we make functions of same name in one class

#include<iostream>
using namespace std;

class animals{
    public:
    void sound(int x){
        cout<<"dog sound is bow bow"<<"\n";
    }
    void sound(double y){
        cout<<"cat sound is meow meow"<<"\n";
    }
};
int main(){
    animals ani;
    ani.sound(5);
    ani.sound(4.5);
   
}
