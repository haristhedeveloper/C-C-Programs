#include<iostream>
using namespace std;

int main(){
    try {
  int age;
  cout<<"Enter your age :";
  cin>>age;
  if (age >= 18) {
    cout <<"COngratulations You are adult";
  } 
  else {
    throw (age);
  }
}
catch(int num){
  cout << "Still you are a child \n";
  cout<<"Your age is :"<<num;
}
}
