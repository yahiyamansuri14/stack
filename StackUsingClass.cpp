#include<iostream>
 using namespace std;
 class Node{
    public:
        int data;
        Node *next;
 };
 class Stack{
    private:
            Node *top;
    public:
            Stack(){top=NULL;}
            void push(int x);
            int pop();
            void display();
 };
 void Stack::push(int x){
    Node *temp=new Node;
    if(temp==NULL)
        cout<<"Stack is Full";
    else{
        temp->data=x;
        temp->next=top;
        top=temp;

    }
 }
 int Stack::pop(){
     int x=-1;
    if(top==NULL)
        cout<<"Stack underflow\n";
    else{
        x=top->data;
        Node *temp=top;
        top=top->next;
        delete temp;
    }
    return x;

 }
 void Stack::display(){
    Node *temp=top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
 }
 int main(){
    Stack stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);
    stk.display();
    stk.pop();
    stk.pop();
    stk.display();
    return 0;
 }
