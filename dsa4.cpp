#include <bits/stdc++.h>
using namespace std;

// Partition function (Lomuto scheme)
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];   // choose last element as pivot
    int i = low - 1;         // index for smaller elements

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // place pivot in correct position
    return i + 1;
}

// Quick Sort function
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // partition index
        quickSort(arr, low, pi - 1);        // sort left subarray
        quickSort(arr, pi + 1, high);       // sort right subarray
    }
}

int main() {
    int N;
    cout << "Enter size of array: ";
    cin >> N;

    vector<int> arr(N);
    cout << "Enter " << N << " integers:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    quickSort(arr, 0, N - 1);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
