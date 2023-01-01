#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
class queue
{
    private:
        node* front = NULL, *rear = NULL;
    public:
        void enqueue(int data);
        void dequeue();
        void display();
};
void queue::enqueue(int data){
    node * new_node = new node;
    new_node->data = data;
    new_node->next = NULL;
    if(front == NULL && rear == NULL){
        front = new_node;
        rear = new_node;
    } else{
        rear->next = new_node;
        rear = new_node;
    }
};
void queue::dequeue(){
    if(front != NULL && rear != NULL){
        front = front->next;
    }
};
void queue::display(){
    if(front != NULL && rear != NULL){
        node *i = front;
        while(i != NULL){
            cout<<i->data<<"\n";
            i = i->next;
        }
    }
};
int main(){
    queue que;
    que.enqueue(4);
    que.enqueue(5);
    que.enqueue(6);
    que.enqueue(7);

    que.display();
    que.dequeue();
    que.display();
    return 0;
}