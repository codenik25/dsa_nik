#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Queue class using linked list
class Queue {
private:
    Node* front; // Points to the front of the queue
    Node* rear;  // Points to the rear of the queue

public:
    // Constructor
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Destructor
    ~Queue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Function to add an element to the queue
    void enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (rear == nullptr) { // Queue is empty
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Enqueued: " << value << endl;
    }

    // Function to remove an element from the queue
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty, cannot dequeue." << endl;
            return -1;
        }

        Node* temp = front;
        int value = front->data;
        front = front->next;

        if (front == nullptr) { // Queue becomes empty
            rear = nullptr;
        }

        delete temp;
        return value;
    }

    // Function to get the front element of the queue
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty, nothing to peek." << endl;
            return -1;
        }
        return front->data;
    }

    // Function to display the queue elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        Node* temp = front;
        cout << "Queue elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Main function
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    cout << "Dequeued: " << q.dequeue() << endl;
    q.display();

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue(); // Attempt to dequeue from an empty queue

    return 0;
}
