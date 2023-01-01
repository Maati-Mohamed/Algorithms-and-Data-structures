#include<iostream>
using namespace std;
struct node {
    int data;
    node* next;
};
class linkedList
{
    private:
        node *top;
    public:
        linkedList(){
            top = NULL;
        }
        void push(int data);
        void pop();
        void display();
};
void linkedList::push(int data){
    node * new_node = new node;
    new_node->data = data;
    if(top == NULL){
        top = new node;
        top->next = new_node;
    } else {
        new_node->next = top->next;
        top->next = new_node;
    }
    
};
void linkedList::pop() {
    if(top == NULL){
        cout<<"Stack is Empty! \n";
        return;
    } else {
        node *d = top->next;
        top->next = d->next;
        return;
    }
    
}
void linkedList::display(){
    node *i = top->next;
    while(i != NULL){
        cout<<i->data<<"\n";
        i = i->next;
    }
};
int main(){

    linkedList list;
    list.push(5);
    list.push(7);
    list.push(9);
    list.push(11);

    list.display();

    list.pop();

    list.display();
    list.pop();

    list.display();

    return 0;
}