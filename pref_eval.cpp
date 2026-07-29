//prefix calculation
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter prefix expression"<<endl;
    string s;
    cin>>s;
    cout<<"Enter values of a,b,c"<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    stack<int> t;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='a')t.push(a);
        else if(s[i]=='b')t.push(b);
        else if(s[i]=='c')t.push(c);
        else{
            int x=t.top();t.pop();  //operand 1
            int y=t.top();t.pop();   //operand 2
            if(s[i]=='+')t.push(x+y);  //operator
            else if(s[i]=='-')t.push(x-y);
            else if(s[i]=='*')t.push(x*y);
            else if(s[i]=='/')t.push(x/y);
        }
    }cout<<t.top();
    return 0;
}