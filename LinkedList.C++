#include<iostream>
using namespace std;

class Node{
public:
  int value;
  Node *next;
};

int main(){
    
    Node* head;
    Node* one;
    Node* two;
    Node* three;
    Node* four;
    
    one = new Node();
    two = new Node();
    three = new Node();
    four = new Node();
    
    one->value=25;
    two->value=50;
    three->value=75;
    four->value=100;
    
    one->next=three;
    two->next=four;
    three->next=two;
    four->next;
    
    head = one;
     while (head != NULL) {
    cout << head->value<<"\n";
    head = head->next;
  }
}
