#include <bits/stdc++.h>
using namespace std;
class Stack{
    int n;
    int *a;
    int top1;
    int top2;
    public:
    Stack(int n){
        this->n=n;
        a=new int[n];
        top1=-1;
        top2=n;
    }
    void push1(int x){
        if(n-top1>1){
            top1++;
            a[top1]=x;
        }else cout<<"Stack Overflow"<<endl;
    }
    void push2(int x){
        if(top2-top1>1){
            top2--;
            a[top2]=x;
        }else cout<<"Stack Overflow"<<endl;
    }
    void pop1(){
     if(top1>=0){      
        top1--;
     }else cout<<"Stack Underflow"<<endl;
    }
    void pop2(){
     if(top2<n){      
        top2++;
     }else cout<<"Stack Underflow"<<endl;
    }
    int peek1(){
      if(top1>=0&&top1<n){
        return a[top1];
      }else cout<<"Stack is empty"<<endl;
    }
    int peek2(){
      if(top2>=0&&top2<n){
        return a[top2];
      }else cout<<"Stack is empty"<<endl;
    }
    void isEmpty1(){
      if(top1==-1) cout<<"Stack1 is empty"<<endl;
      else cout<<"Stack is not empty"<<endl;
    }
    void isEmpty2(){
      if(top2==n) cout<<"Stack2 is empty"<<endl;
      else cout<<"Stack is not empty"<<endl;
    }
};
int main() {
 Stack s(5);
    s.push1(10);
    s.push2(20);
    s.push1(30);
    cout<<s.peek1()<<endl;
    s.pop1();
    cout<<s.peek1()<<endl;
    s.pop1();
    cout<<s.peek2()<<endl;
    s.pop1();
    cout<<s.peek2()<<endl;
    s.pop2();
    s.isEmpty1();
    s.isEmpty2();
return 0;

}
