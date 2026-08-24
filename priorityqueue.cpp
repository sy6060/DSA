//using linked list implement priority queue
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
 class Priorityqueue {
private:
    Node* front;
    Node* rear;
public:
    Priorityqueue() {
        front = rear = nullptr;
    }
    void insert(int value) {
        Node* newNode = new Node(value);
        if (front == nullptr) {
            front = rear = newNode;
        } else {
            // Insert in sorted order (descending)
            Node* current = front;
            while (current && current->data > value) {
                current = current->next;
            }
            if (current == front) { // Insert at front
                newNode->next = front;
                front->prev = newNode;
                front = newNode;
            } else if (current == nullptr) { // Insert at rear
                rear->next = newNode;
                newNode->prev = rear;
                rear = newNode;
            } else { // Insert in the middle
                newNode->next = current;
                newNode->prev = current->prev;
                current->prev->next = newNode;
                current->prev = newNode;
            }
        }
    } void display() {
        Node* current = front;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};
int main(){
    // Implementation of priority queue using linked list will go here
    Priorityqueue pq;
    pq.insert(5);
    pq.insert(2);
    pq.insert(8);
    pq.display(); // Display the priority queue

    return 0;
}