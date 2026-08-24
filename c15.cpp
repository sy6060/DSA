//create a class Number containing private data member use aaff to swap the private values of 2 objects
#include <iostream>
using namespace std;
class Number {
    private : int a;
    public:
    void input(){
        cout<<"enter the value of a"<<endl;
        cin>>a;
    }
    friend void swap(Number &p ,Number &q);
    void display(){
        cout<<"object is "<<a<<endl;
    }
};
void swap(Number &p,Number &q){
    int temp=p.a;
    p.a=q.a;
    q.a=temp;
}
int main(){
    Number n1,n2;
    n1.input();
    n2.input();
    cout<<"before swapping"<<endl;
    n1.display();
    n2.display();
    swap(n1,n2);
    cout<<"after swapping"<<endl;
    n1.display();
    n2.display();
    return 0;
}