#include<iostream>
using namespace std;
class queue
{
    private: 
        int front = -1, rear = -1,size = 8, *Q;
    public: 
        queue();
        void enqueue(int data);
        void dequeue();
        void display();
};
queue::queue()
{
    Q = new int[size];
};
void queue::enqueue(int data){
    if(rear != size-1){
        if(front == -1 && rear == -1){
            rear++;
            front++;
            Q[rear] = data;
        } else{
            rear++;
            Q[rear] = data;
        }
    }  
};
void queue::dequeue(){
    if(front != -1 && rear != -1 && front <= rear){
        front++;
    }
};
void queue::display(){
    for(int i = front; i <= rear; i++){
        cout<<Q[i]<<"\n";
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