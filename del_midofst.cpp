//remove mid of a stack
#include <bits/stdc++.h>
using namespace std;
void removeMid(stack<int> &t,int c,int n){
    if(c==n/2){  //if c is equal to mid of stack then pop the element and return
        t.pop();return ;
    }  
    int num=t.top();t.pop();
    removeMid(t,c+1,n);
    t.push(num);
}
int main() {
stack<int> t;
int n;cin>>n;
int s=n;
while(n>0){
    int x;cin>>x;
    t.push(x);n--;
}int c=0;
removeMid(t,c,s);
while(!t.empty()){
    cout<<t.top()<<endl;t.pop();
}
return 0;
}
