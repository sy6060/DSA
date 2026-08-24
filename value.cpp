#include <bits/stdc++.h>
using namespace std;
class Student{
  public:
  int m;
  void change(Student s){
      s.m=55;
      cout<<"changed marks: "<<s.m<<endl;
  }
};
int main() {
 Student s;
 s.m=100;
 s.change(s);
 cout<<"value after func calling = "<<s.m;
 return 0;
}
