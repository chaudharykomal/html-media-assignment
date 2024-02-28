#include <bits/stdc++.h>
using namespace std
int main() {
int n;
cin >> n;
// Printing the topmost star: 0th row
for(int i = 0; i < n; ++i)
cout << " ";
cout << "*" << endl;
// Printing the rest of the upper triangle: [1...n] rows
for(int i = 1; i <= n; ++i) {
// Printing initial spaces
for(int j = 0; j < n - i; ++j) {
cout << " ";
}
cout << "*";
int m = 2 * i - 1;
// Printing middle spaces
for(int j = 0; j < m; ++j) {
cout << " ";
}
}
}