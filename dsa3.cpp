#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    cout << "Factorial of " << N << " = " << factorial(N) << endl;
    cout << N << "th Fibonacci number = " << fibonacci(N) << endl;

    return 0;
}
