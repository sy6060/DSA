#include <bits/stdc++.h>
using namespace std;
void dec_to_bin(int n){
    stack<int> t;
     while(n>0){
        t.push(n%2);
        n/=2;
    }
    while(!t.empty()){
        cout<<t.top();
        t.pop();
    }
}
void dec_to_oct(int n){
    stack<int> t;
    while(n>0){
        t.push(n%8);n/=8;
    }while(!t.empty()){
        cout<<t.top();t.pop();
    }
}
void dec_to_hex(int n){
     stack<int> t;
    while(n>0){
        t.push(n%16);
        n/=16;
    }

    while(!t.empty()){
       if(t.top()<10) cout<<t.top();
       else cout<<(char)(t.top()-10+'A');
        t.pop();
    }
}
int main(){
    int n;cin>>n;
    int base;cin>>base;
     if(base==2)dec_to_bin(n);
     else if(base==8)dec_to_oct(n);
     else if(base==16)dec_to_hex(n);
     else cout<<"Invalid base";
     return 0;
}