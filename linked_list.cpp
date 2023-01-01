#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
class linkedList
{
    private:
        node* head;
    public:
        linkedList(){
            head = NULL;
        }
        void insert(int data);
        void deleteNode(int data);
        void display();
};
void linkedList::insert(int data){
    node* new_node = new node;
    new_node->data = data;
    new_node->next = NULL;
    if(head == NULL){
        head = new node;
        head->next = new_node;
    } else{
        node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;

    }
}
void linkedList::display()
{
    if(head == NULL){
        cout<<"List is empty";
        return;
    } else{
        node* i = head;
        while(i != NULL){
            cout<<"data : "<<i->data<<"| next : "<<i->next<<"\n";
            i = i->next;
        }
    }
}
void linkedList::deleteNode(int data){
    if(head == NULL || head->next == 0){
       cout<<"List is empty \n";
        return;
    }
    node  *a, *b;
    a = head;
    b = head;
    while(a->data != data){
        b = a;
        a = a->next;
        if(a == NULL){
            cout<<"This element not in the list \n";
            return;
        }
    }
    b->next = a->next;
    return;
}
int main()
{
    linkedList l;
    l.insert(3);
    l.insert(4);
    l.insert(5);

    l.deleteNode(4);
    l.deleteNode(5);
    l.display();

    
    return 0;
}