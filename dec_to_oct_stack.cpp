#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    stack<int> t;
    while(n>0){
        t.push(n%8);
        n/=8;
    }
    
    while(!t.empty()){
        cout<<t.top();
        t.pop();
    }
    return 0;
}