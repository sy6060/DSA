#include <bits/stdc++.h>
using namespace std;
class Employee{
    int i,s;
    string n;
public: Employee(int id,int salary,string name){ //parameterised constructor
    i=id,s=salary,n=name;
}
Employee(const Employee &t){  //copy constructor
    i=t.i,s=t.s+20000,n=t.n;//modifying salary 
}
void display(){
    cout<<"name:"<<n<<" ID:"<<i<<" salary:"<<s<<endl;
}
};
int main() {
Employee ob1(3756,750000,"nico");
Employee ob2(ob1);
ob1.display();
ob2.display();
return 0;
}
