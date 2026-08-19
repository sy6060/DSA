#include <iostream>
using namespace std;

class Queue {
    int n;
    int *a;
    int f, r;
public:
    Queue(int n) {
        this->n = n;
        a = new int[n];
        f = r = -1;
    }

    void enqueue(int val) {
        if (r == n - 1) {
            cout << "overflow\n";
            return;
        }
        if (f == -1) f = 0;
        a[++r] = val;
    }

    void dequeue() {
        if (f == -1 || f > r) {
            cout << "underflow\n";
            return;
        }
        f++;
        if (f > r) { // reset when empty
            f = r = -1;
        }
    }

    void isempty() {
        if (f == -1 || f > r) {
            cout << "Queue is empty\n";
        }
    }

    void display() {
        if (f == -1) {
            cout << "Queue is empty\n";
            return;
        }
        for (int i = f; i <= r; i++)
            cout << a[i] << " ";
        cout << endl;
    }
};

int main() {
    cout<<"enter queue size"<<endl;
    int n;
    cin >> n;
    Queue q(n);   // proper initialization

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();

    q.dequeue();
    q.dequeue();
    q.display();

    q.dequeue();
    q.dequeue();
    q.isempty();

    return 0;
}
