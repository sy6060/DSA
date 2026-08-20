#include <iostream>
using namespace std;
class Student{public:
    string name;
    int marks;
    void compare(Student ob){
        if(marks>ob.marks){
            cout<<name<<" has more marks than "<<ob.name<<endl;
        }
        else if(marks<ob.marks){
            cout<<ob.name<<" has more marks than "<<name<<endl;
        }
        else{
            cout<<"Both students have the same marks."<<endl;
        }
    }

};
int main(){
    Student s1,s2;
    s1.name="paavni";
    s2.name="jagrati";
    s1.marks=90;
    s2.marks=85;
    s1.compare(s2);
    return 0;
}
