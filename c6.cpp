//Create a Circle class with private radius and calculate its area using a public function.
#include <iostream>
using namespace std;
class Circle{
    private:
    double radius;
    public:
    double area(double r){
        radius=r;
        return 3.14*radius*radius;
    }
    void display(double r){
        cout<<"are is: "<<area(r)<<endl;
    }

};
int main(){
    Circle c;
    double r;
    cin>>r;
    c.display(r);
    return 0;

}