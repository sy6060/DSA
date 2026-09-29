#include <iostream>
#include <vector>
using namespace std;

class UpperTriangularMatrix {
private:
    int n;                // Dimension of matrix
    vector<int> data;     // 1D storage

    // Map (i, j) → index in 1D array
    int index(int i, int j) {
        if (i > j) throw invalid_argument("Invalid access: lower triangle element");
        return (i * (2 * n - i + 1)) / 2 + (j - i);
    }

public:
    UpperTriangularMatrix(int size) : n(size) {
        data.resize((n * (n + 1)) / 2, 0);
    }

    void set(int i, int j, int val) {
        if (i > j) {
            if (val != 0) throw invalid_argument("Lower triangle must remain zero");
            return;
        }
        data[index(i, j)] = val;
    }

    int get(int i, int j) {
        if (i > j) return 0; // Lower triangle is always zero
        return data[index(i, j)];
    }

    void display() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << get(i, j) << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n = 4;
    UpperTriangularMatrix mat(n);

    mat.set(0, 0, 1);
    mat.set(0, 1, 2);
    mat.set(0, 2, 3);
    mat.set(0, 3, 4);
    mat.set(1, 1, 5);
    mat.set(1, 2, 6);
    mat.set(1, 3, 7);
    mat.set(2, 2, 8);
    mat.set(2, 3, 9);
    mat.set(3, 3, 10);

    cout << "Upper Triangular Matrix:\n";
    mat.display();

    return 0;
}
