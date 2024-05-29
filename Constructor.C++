#include<iostream>
using namespace std;

class about{
    public:
    string name;
    int age;
    string gender;
    about(){
        cout<<"Constructor must be same as the class name and we define constructor inside or outside the class"<<endl;
    }
    about(string x, int y, string z){
        name=x;
        age=y;
        gender=z;
    }
    about(int y,string x){
        name=x;
        age=y;
    }
};


int main(){
    about ob("haris",22,"male");
    about ob1(22,"furqan");
    
    cout<<ob.name<<"\n"<<ob.age<<"\n"<<ob.gender<<"\n";
    cout<<ob1.name<<"\n"<<ob1.age;
}
