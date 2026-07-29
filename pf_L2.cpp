#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter postfix expression"<<endl;
    string s;cin>>s;
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){cout<<"enter the value of "<<s[i]<<endl;
            char x;cin>>x;
            s[i]=x;
        }
    }stack<int> t;
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i]))t.push(s[i]-'0');
        else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
            int x=t.top();t.pop();
            int y=t.top();t.pop();
            if(s[i]=='+')t.push(x+y);
            else if(s[i]=='-')t.push(y-x);
            else if(s[i]=='*')t.push(x*y);
            else if(s[i]=='/')t.push(y/x);
        }
    }
    cout<<"result:"<<t.top();

}