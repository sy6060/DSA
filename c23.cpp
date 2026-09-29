#include <bits/stdc++.h>
using namespace std;
class Result{
    int r;
    vector<int> m;
    string n;
public: Result(int rollno,vector<int> marks,string name){ //parameterised constructor
    r=rollno,n=name;
    m=marks;
}
Result(const Result &t){  //copy constructor
    r=t.r,m=t.m,n=t.n;
}
int calculatetotal(){
    return m[0]+m[1]+m[3];
}
int calculatepercentage(){
    return calculatetotal()/3;
}
void display(){
    cout<<"name:"<<n<<" rollno:"<<r<<" percentage:"<<calculatepercentage()<<endl;
}
};
int main() {
Result ob1(1234,{89,90,97},"k");
Result ob2(ob1);
ob1.display();
ob2.display();
}
