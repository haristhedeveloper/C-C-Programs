#include<iostream>
using namespace std;
int main(){
    
    for(int i=10;i>=1;i--){  // This loop print a row first
        for(int j=1;j<=i;j++){ //Then this loop print a starik it print starik from 1 to 15 then first loop iterate and second row make then print 14 starik and so on....
            cout<<"* ";
        }
        cout<<"\n";
    }
}
