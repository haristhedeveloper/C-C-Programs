#include<iostream>
using namespace std;
int main(){
    int i,number,number1;
    cout<<"Please enter the number: ";
    cin>>number;
    number1=number-1;
    if(number>=5){
        for(i=2;i<=number1;i++){
        if((number%i)==0){
            cout<<"The number is not prime";
            break;
            }
        
        else{
            cout<<"The number is Prime";
            break;
        }
        }
    }
    else{
        if (number== 1 & 3){
          cout<<"The number is prime";
        }
        else{
            cout<<"The number is not prime";
        }
    }
}        
