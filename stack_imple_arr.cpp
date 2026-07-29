#include <bits/stdc++.h>
using namespace std;
class Stack{
    int n;
    int *a; //pointer to array a
    int top;
    public:
    Stack(int n){
        this->n=n;
        a=new int[n];
        top=-1;
    }
    void push(int x){
        if(n-top>1){
            top++;
            a[top]=x;
        }else cout<<"Stack Overflow"<<endl;
    }
    void pop(){
     if(top>=0){      
        top--;
     }else cout<<"Stack Underflow"<<endl;
    }
    int peek(){
      if(top>=0&&top<n){   //if top is in range you can peek
        return a[top];
      }else cout<<"Stack is empty"<<endl;
    }
    void isEmpty(){
      if(top==-1) cout<<"Stack is empty"<<endl;
      else cout<<"Stack is not empty"<<endl;
    }

};
int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    s.pop();
    s.isEmpty();
    return 0;
}