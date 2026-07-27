#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s;
    cin>>s;
    string p=""; //contains string with only alphabets and in lower case
    int n=s.length();
    stack<char> t;
    for(int i=0;i<n;i++){//pushing string in stack
    s[i]=tolower(s[i]);
       if((s[i]>64&&s[i]<91)||(s[i]>96&&s[i]<123)){ 
        t.push(s[i]); //creating stack
       p+=s[i];}//creating string with only alpjabets and in lower case
    }string rev="";
    for(size_t i=0;i<p.length();i++){//reversing the string and popping stack
rev+=t.top();
t.pop();
    }
    if(rev==p)cout<<"Palindrome";
    else cout<<"nope";
    return 0;
}
