//circular queue implementation using linked list
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
class CircularQueue {
private:
    Node* front;
    Node* rear;
public:
CircularQueue() {
        front = rear = nullptr; // initialize properly
    }
    void insert(int value) {
        Node* newNode = new Node(value);
        if (front == nullptr) {
            front = rear = newNode;
            rear->next = front; // Circular link
        } else {
            rear->next = newNode;
            rear = newNode;
            rear->next = front; // Maintain circular link
        }
    }
    void del() {
        if (front == nullptr) {
            cout << "Queue is empty\n";
            return;
        }
        Node* temp = front;
        if (front == rear) { // Only one element
            front = rear = nullptr;
        } else {
            front = front->next;
            rear->next = front; // Maintain circular link
        }
        delete temp;
    }
    void display() {
        if (front == nullptr) {
            cout << "Queue is empty\n";
            return;
        }
        Node* current = front;
        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != front);
        cout << endl;
    }
};
int main(){
    CircularQueue cq;
    cq.insert(10);
    cq.insert(20);
    cq.insert(30);
    cq.insert(40);
    cq.display();
    cq.del();
    cq.display();
    cq.del();
    cq.display();
    return 0;
}