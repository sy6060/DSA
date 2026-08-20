#include <iostream>
using namespace std;
class Number{ public:
    int n;
   
void add(Number ob){
    n+=ob.n;
}
};
int main(){
    Number ob1,ob2;
    ob1.n=10;
    ob2.n=7;
    cout<<"ini values: "<<ob1.n<<" "<<ob2.n<<endl;
    ob2.add(ob1);  //calling function is ob2 so changes are made to ob2
    cout<<"values after addition: "<<ob1.n<<" "<<ob2.n<<endl;
    return 0;
}