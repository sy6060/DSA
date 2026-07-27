#include <iostream>
#include <stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    stack<int> t;
    while(n>0){
        t.push(n%2);
        n/=2;
    }
    while(!t.empty()){
        cout<<t.top();
        t.pop();
    }
    return 0;
}