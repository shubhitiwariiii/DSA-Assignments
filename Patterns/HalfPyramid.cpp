#include<bits/stdc++.h>
using namespace std;

void HalfPyramid(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j <<" ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the size of the right angle pattern: ";
    cin >> n;
    HalfPyramid(n);
    return 0;
}