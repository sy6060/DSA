#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a={1,2,4,6,7};
    vector<int> b={2,3,5,6};
    vector<int> c;
    int i=0, j=0;
    
    while(i < a.size() && j < b.size()) {
        if(a[i] == b[j]) {
            c.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i] < b[j]) {
            c.push_back(a[i]);
            i++;
        }
        else {
            c.push_back(b[j]);
            j++;
        }
    }
    
    while(i < a.size()) {
        c.push_back(a[i]);
        i++;
    }
    
    while(j < b.size()) {
        c.push_back(b[j]);
        j++;
    }
    
    for(int k = 0; k < c.size(); k++)
        cout << c[k] << " ";
        
    return 0;
}