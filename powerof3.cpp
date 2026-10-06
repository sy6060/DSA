//check if the number is a power of 3
#include <iostream>
using namespace std;
bool ispow(int n){
    if(n==1)return true;
    else if(n%3!=0||n==0)return false;
    else return ispow(n/3);
}
int main(){
    int n;
    cin>>n;
    ispow(n)?cout<<"YES":cout<<"NO";
}