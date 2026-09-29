#include <bits/stdc++.h>
using namespace std;
class Employee{
public:
string n;
int id;
static int nextid;
Employee(string name){
    n=name;
    id=nextid++;
}
void display(){
    cout<<"Name: "<<n<<"\nID: "<<id<<endl;
}
};
int Employee::nextid=4331;
int main(){
    Employee e1("nico");
    Employee e2("jju");
    Employee e3("kei");
    e1.display();
    e2.display();
    e3.display();
    return 0;
}