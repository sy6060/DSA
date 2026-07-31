#include <bits/stdc++.h>
using namespace std;
int sub(int a,int b=9){
    return a-b;
}
int main(){
cout<<sub(10,20)<<endl; // if bothe arg are passed it takes user's value
cout<<sub(10);  // if no arg is passed then then daf arg is used
    return 0;
}