#include <bits/stdc++.h>
using namespace std;
class Student{
  public:
  int m;
  Student swapvalues(Student &s,Student &t){
   swap(s.m,t.m);
   return s;
  }
};
int main() {
 Student s,t,z;
 s.m=100;t.m=89;
 z=z.swapvalues(s,t);
 cout<<z.m;
 return 0;
}
