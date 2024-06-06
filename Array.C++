#include<iostream>
using namespace std;

int main(){
    string cars[4]={"Toyota","Audi","BMW","Honda"};
    
    for(int i=0;i<4;i++){
    cout<<i<<" "<<cars[i]<<endl;
    
    }
    cout<<sizeof(cars)/sizeof(string);
    
}
