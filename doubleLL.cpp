#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* prev;
    Node* next;

    Node(int data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};
class DoublyLL{
    public:
    Node* head;
     Node* tail;
     DoublyLL(){
        head=NULL;
        tail=NULL;
     }
     void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }cout<<"NULL"<<endl;
     }

     void insertAtHead(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        return;
     }
     void insertAtEnd(int val){
        Node* new_node=new Node(val);
        if(tail==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        return;
     }
     void insertAtPos(int val,int k){
        //k<=length of dll
        Node* temp=head;
        int count=1;
        while(count<(k-1)){
            temp=temp->next;
            count++;
        }
        Node* new_node=new Node(val);
        new_node->next=temp->next;
        temp->next=new_node;
        new_node->prev=temp;
        new_node->next->prev=new_node;
        return;
     }
     void deleteAtHead(){
        if(head==NULL){
            return;
        }
        Node* temp=head;
        head=head->next;
        if(head==NULL){
            tail=NULL;
        }else{
            head->prev=NULL;
        }
        free(temp);
     }
     void deleteAtEnd(){
        if(head==NULL){
            return;
        }
        Node* temp=tail;
        tail=tail->prev;
        if(tail==NULL){
            head=NULL;
        }else{
            tail->next=NULL;
        }
       free(temp);
     }
     void deleteAtPos(int k){
        //k<=length of dll
        Node* temp=head;
        int counter=1;
        while(counter<k){
            temp=temp->next;
            counter++;

        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
     }
};

int main()
{
   DoublyLL dll;
   dll.insertAtHead(1);
    dll.display();
   dll.insertAtHead(2);
    dll.display();
   dll.insertAtHead(3);
   dll.display();
   dll.insertAtEnd(4);
   dll.display();
   dll.insertAtPos(4,3);
   dll.display();
   dll.deleteAtHead();
   dll.display();
   dll.deleteAtEnd();
   dll.display();
   dll.deleteAtPos(2);
   dll.display();
    return 0;
}