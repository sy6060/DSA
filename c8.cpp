//Create a class Time containing hours, minutes, and seconds. Pass one Time object to a member function and calculate the sum of two time objects.
#include <iostream>
using namespace std;

class Time {
public:
    int hours, minutes, seconds;

    void add(Time t1, Time t2) {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes + seconds / 60;
        hours = t1.hours + t2.hours + minutes / 60;
        seconds %= 60;
        minutes %= 60;
    }

    void display() {
        cout << "Time: " << hours << " hours " << minutes << " minutes " << seconds << " seconds" << endl;
    }
};

int main() {
    Time one, two, sum;
    one.hours = 2;
    one.minutes = 30;
    one.seconds = 45;
    two.hours = 1;
    two.minutes = 15;
    two.seconds = 30;
    sum.add(one, two);
    sum.display();
    return 0;
}