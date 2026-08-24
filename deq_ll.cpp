//double ended queue implementation using linked list
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class Deque {
private:
    Node* front;
    Node* rear;
public:
    Deque() {
        front = rear = nullptr;
    }

    void insertFront(int value) {
        Node* newNode = new Node(value);
        if (front == nullptr) {
            front = rear = newNode;
        } else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }

    void insertRear(int value) {
        Node* newNode = new Node(value);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
    }

    void deleteFront() {
        if (front == nullptr) {
            cout << "Deque is empty\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front) front->prev = nullptr;
        else rear = nullptr; // empty now
        delete temp;
    }

    void deleteRear() {
        if (rear == nullptr) {
            cout << "Deque is empty\n";
            return;
        }
        Node* temp = rear;
        rear = rear->prev;
        if (rear) rear->next = nullptr;
        else front = nullptr; // empty now
        delete temp;
    }

    void display() {
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Deque dq;
    dq.insertFront(10);
    dq.insertFront(40);
    dq.insertFront(70);
    dq.insertRear(20);
    dq.insertRear(50);
    dq.insertRear(29);
    dq.display();
    dq.deleteFront();
    dq.deleteRear();
    dq.display();
    return 0;
}
