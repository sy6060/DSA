//postfix calculation
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter postfix expression"<<endl;
    string s;
    cin>>s;
    cout<<"Enter values of a,b,c"<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    stack<int> t;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a')t.push(a);
        else if(s[i]=='b')t.push(b);
        else if(s[i]=='c')t.push(c);
        else{
            int x=t.top();t.pop();  //operand 1
            int y=t.top();t.pop();   //operand 2
            if(s[i]=='+')t.push(y+x);  //operator
            else if(s[i]=='-')t.push(y-x);
            else if(s[i]=='*')t.push(y*x);
            else if(s[i]=='/')t.push(y/x);
        }
    }cout<<t.top();
    return 0;
}