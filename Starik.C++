#include<iostream>
using namespace std;
int main(){
    
    for(int i=1;i<=5;i++){  // This loop print a row first
        for(int j=1;j<=i;j++){ //Then this loop print a starik
            cout<<"* ";
        }
        cout<<"\n";
    }
}
