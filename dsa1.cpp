#include <bits/stdc++.h>
using namespace std;

#define MAX 100

// ---------------- STACK IMPLEMENTATION ----------------
class Stack {
    int arr[MAX];
    int top;
public:
    Stack() { top = -1; }

    void PUSH(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack\n";
    }

    void POP() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top--] << " popped from stack\n";
    }

    void display() {
        if (top < 0) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack contents: ";
        for (int i = 0; i <= top; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

// ---------------- INFIX TO POSTFIX ----------------
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

string infixToPostfix(string infix) {
    stack<char> st;
    string postfix = "";

    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;  // operand goes directly
        } else if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop(); // remove '('
        } else { // operator
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

// ---------------- POSTFIX EVALUATION ----------------
int evaluatePostfix(string postfix) {
    stack<int> st;

    for (char c : postfix) {
        if (isdigit(c)) {
            st.push(c - '0');  // convert char to int
        } else {
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();

            switch (c) {
                case '+': st.push(val1 + val2); break;
                case '-': st.push(val1 - val2); break;
                case '*': st.push(val1 * val2); break;
                case '/': st.push(val1 / val2); break;
            }
        }
    }
    return st.top();
}

// ---------------- MAIN ----------------
int main() {
    // Stack demo
    Stack s;
    s.PUSH(10);
    s.PUSH(20);
    s.POP();
    s.display();

    // Infix to Postfix + Evaluation
    string infix = "3+(2*4)-5";
    string postfix = infixToPostfix(infix);
    cout << "Postfix: " << postfix << endl;

    cout << "Evaluation Result: " << evaluatePostfix(postfix) << endl;
    return 0;
}
