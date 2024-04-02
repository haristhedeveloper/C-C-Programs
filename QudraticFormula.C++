// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a,b,c,root,forpositive,fornegative;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    
    root=sqrt((b*b) - (4*a*c));
    
    forpositive= (-b+root)/(2*a);
    fornegative= (-b-root)/(2*a);
    
    cout<<forpositive<<endl;
    cout<<fornegative;
}
