#include <bits/stdc++.h>
using namespace std;

int main() {
string s;
cin>>s;
stack<char> t;
for(int i=0;i<s.length();i++){
    if(s[i]=='('){
        t.push(s[i]);
    }else if(s[i]==')'&& (!t.empty())){
        t.pop();
    }else continue;
}if(t.empty())cout<<"valid";
else cout<<"nope";
return 0;

}
