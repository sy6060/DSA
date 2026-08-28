#include <bits/stdc++.h>
using namespace std;

#define MAX 5   // queue size

// ---------------- LINEAR QUEUE ----------------
class Queue {
    int arr[MAX];
    int front, rear;
public:
    Queue() { front = rear = -1; }

    void ENQUEUE(int x) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow\n";
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = x;
        cout << x << " enqueued\n";
    }

    void DEQUEUE() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
            return;
        }
        cout << arr[front++] << " dequeued\n";
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue contents: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

// ---------------- CIRCULAR QUEUE ----------------
class CircularQueue {
    int arr[MAX];
    int front, rear;
public:
    CircularQueue() { front = rear = -1; }

    void ENQUEUE(int x) {
        if ((front == 0 && rear == MAX - 1) || (rear + 1) % MAX == front) {
            cout << "Circular Queue Overflow\n";
            return;
        }
        if (front == -1) front = rear = 0;
        else rear = (rear + 1) % MAX;
        arr[rear] = x;
        cout << x << " enqueued (circular)\n";
    }

    void DEQUEUE() {
        if (front == -1) {
            cout << "Circular Queue Underflow\n";
            return;
        }
        cout << arr[front] << " dequeued (circular)\n";
        if (front == rear) front = rear = -1;
        else front = (front + 1) % MAX;
    }

    void display() {
        if (front == -1) {
            cout << "Circular Queue is empty\n";
            return;
        }
        cout << "Circular Queue contents: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % MAX;
        }
        cout << endl;
    }
};

// ---------------- MAIN ----------------
int main() {
  
    Queue q;
    q.ENQUEUE(10);
    q.ENQUEUE(20);
    q.ENQUEUE(30);
    q.DEQUEUE();
    q.display();

   
    CircularQueue cq;
    cq.ENQUEUE(1);
    cq.ENQUEUE(2);
    cq.ENQUEUE(3);
    cq.ENQUEUE(4);
    cq.DEQUEUE();
    cq.DEQUEUE();
    cq.ENQUEUE(5);
    cq.ENQUEUE(6); // reuses vacant positions
    cq.display();

    return 0;
}
