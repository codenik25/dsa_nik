#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
class Queue{
    private:
    Node *front;
    Node *rear;
    public:
    Queue(){
        front=nullptr;
        rear=nullptr;
    }
    ~Queue(){
        while(front!=nullptr){
            Node *temp=front;
            front=front->next;
            delete temp;
        }
    }
    bool isEmpty(){
        return front==nullptr;
    }
    void enqueue(int val){
        Node *newNode=new Node();
        newNode->data=val;
        newNode->next=nullptr;
        if(rear==nullptr){
            front=rear=newNode;
        }
        else{
            rear->next=newNode;
            rear=newNode;
        }
    }
    void dequeu(){
        if(isEmpty()){
            cout<<"Queue Underflow";
        }
        Node* temp=front;
       
        front=front->next;
        if(front==nullptr)
        {
            rear=nullptr;
        }
        delete temp;
        
    }
    void display(){
        if(isEmpty()){
            cout<<"Queue is empty";
        }
        Node* temp=front;
        cout<<"Queue Element:";
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeu();
    q.display();
    return 0;
}