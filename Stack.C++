#include<iostream>
using namespace std;
#define n 100
class Stack{
    int* arr;
    int top;
    public:
    Stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"no element to pop";
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"no element in stack";
        }
        return arr[top];
    }
};


int main(){
    Stack st;
    cout<<st.Top()<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    
}
