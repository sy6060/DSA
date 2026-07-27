#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    stack<char> t;
    for(int i=0;i<n;i++){//pushing string in stack
        t.push(s[i]);
    }
    for(int i=0;i<n;i++){//popping string from stack
cout<<t.top();
t.pop();
    }
    return 0;
}
