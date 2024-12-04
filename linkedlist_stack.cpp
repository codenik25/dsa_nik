#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};


class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

   
    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Pushed " << value << " onto the stack.\n";
    }

    
    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow. No elements to pop.\n";
            return;
        }
        Node* temp = top;
        cout << "Popped " << temp->data << " from the stack.\n";
        top = top->next;
        delete temp;
    }

  
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1;
        }
        return top->data;
    }

    
    bool isEmpty() {
        return top == nullptr;
    }


    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        Node* temp = top;
        cout << "Stack elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack stack;
    int choice,x;
do{
        cout<<"1. Push\t 2. POP\t 3. Display\t 4. Exit";
    cin>>choice;
        switch(choice){
            case 1:
            {
                cout<<"Enter the inserted element:";
                cin>>x;
                stack.push(x);
                break;
            }
            case 2:
            {
                stack.pop();
                break;

            }
            case 3:
            {
                stack.display();
                break;
            }
            case 4:
            {
                cout<<"Exit";
                break;
            }
            default:
            {
                cout<<"Enter valid choice";
            }
        }
    }while(choice!=4);
    cout<<"\n";
    cout << "Top element is: " << stack.peek() << endl;

    return 0;
}
