#include<bits/stdc++.h>
using namespace std;

void invertedHalfPyramid(int n) {
    for(int i = n-1; i >= 0 ; i--) {
        for(int j = 1; j <= i; j++) {
            cout << j <<" ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the size of the pattern: ";
    cin >> n;
    invertedHalfPyramid(n);
    return 0;
}