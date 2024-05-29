#include<iostream>
using namespace std;

class employee{
    
    private:
    string salary;
    
    public:
    void setsalary(string s){
        salary=s;
    }
    // this getter method tell the type of data which it return
    string  getsalary(){
        return salary;
    }
};
int main(){
    employee ob;
    ob.setsalary("Fifty Thousand");
    cout<<ob.getsalary();
}
