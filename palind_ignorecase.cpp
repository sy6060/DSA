#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s;
    getline(cin,s);         //to enter string with spaces
    string p="";
    int n=s.length();
    stack<char> t;
    for(int i=0;i<n;i++){   //pushing string in stack
    if(s[i]==' ')continue;   //ignore spaces
    s[i]=tolower(s[i]);     //ignore case and convert to all lowercase
       if((s[i]>64&&s[i]<91)||(s[i]>96&&s[i]<123)){ t.push(s[i]);    //push onlu alphabets
       p+=s[i];}    //making clean string alongside
    }string rev="";
    for(int i=0;i<p.length();i++){       //popping string from stack
rev+=t.top();
t.pop();
    }
    if(rev==p)cout<<"Palindrome";
    else cout<<"nope";
    return 0;
}
