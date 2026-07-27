#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
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
    return 0;
}