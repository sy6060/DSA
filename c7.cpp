//Create a class Distance containing feet and inches. Write a function that accepts another Distance object and adds the two distances.
#include <iostream>
using namespace std;
class Distance{
public:
int feet,inches;
void add(Distance d1,Distance d2){
    feet=d1.feet+d2.feet;
    inches=d1.inches+d2.inches;
    if(inches>=12){
        feet+=inches/12;
        inches=inches%12;
    }
}
    void display(){
        cout<<"Distance: "<<feet<<" feet "<<inches<<" inches"<<endl;
    }
};
int main(){
    Distance one,two,sum;
    one.feet=5;
    one.inches=9;
    two.feet=3;
    two.inches=11;
    sum.add(one,two);
    sum.display();
    return 0;
}