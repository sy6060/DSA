#include <bits/stdc++.h>
using namespace std;
class Student{
    int r,m;
    string n;
public: Student(int rollno,int marks,string name){ //parameterised constructor
    r=rollno,m=marks,n=name;
}
Student(const Student &t){  //copy constructor
    r=t.r,m=t.m,n=t.n;
}
void display(){
    cout<<"name:"<<n<<" rollno:"<<r<<" marks:"<<m<<endl;
}
};
int main() {
Student ob1(1234,88,"haru");
Student ob2(ob1);
ob1.display();
ob2.display();
}
