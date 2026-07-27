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
    }string rev="";
    for(int i=0;i<n;i++){//creation of reversed string and popping stack
    rev+=t.top();
    t.pop();
    }
    if(rev==s)cout<<"Palindrome";//compare og s and rev 
    else cout<<"nope";
    return 0;
}
