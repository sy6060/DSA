//create 2 obj of a class student store marks in both objects and  use a friend function to determine 
//which student has highest marks

#include <iostream>
using namespace std;
class Student{

    private: int m;
    public: 
    void input(int value){
       m=value;
    }
    friend void compare(Student, Student );
};
void compare(Student p,Student q){
    cout << "Student with highest marks: " << ((p.m > q.m) ? p.m : q.m) << endl;
}
int main(){
    Student j,k;
   j.input(67);
   k.input(90);

    compare(j, k);
    return 0;
}