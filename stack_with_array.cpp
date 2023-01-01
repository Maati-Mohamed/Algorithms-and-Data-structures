#include<iostream>
using namespace std;
class stack
{
    private:
        int size = 8,
        top = -1,
        *S;
        
    public:
        stack(){
            S = new int[size];
        }
        void push(int data);
        int pop();
        void display();

};
void stack::push(int data){
    if(top == size-1){
        cout<<"Stack is Full!";
        return;
    }
    top++;
    S[top] = data;
};
int stack::pop(){
    if(top == -1){
        cout<<"Stack is Empty!";
        return 0;
    }
    return S[top--];
}
void stack::display(){
    if(top == -1){
        cout<<"Stack is Empty!";
        return;
    }
    for(int i = top; i >= 0 ; i--){
        cout<<S[i]<<"\n";
    }
};
int main(){

    stack stk;
    stk.push(9);
    stk.push(12);
    stk.push(14);
    stk.push(15);

    stk.display();
    stk.pop();

    stk.display();
    stk.pop();

    return 0;
}