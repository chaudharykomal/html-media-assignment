#include <bits/stdc++.h>
using namespace std
int main() {
int n;
cin >> n;
// Printing 0th row
for(int i = 0; i < 2 * n - 1; ++i) {
cout <<"* ";
}
cout << endl;
// Printing upper pattern
for(int i = 1; i < n; ++i) {
for(int j = 0; j < n - i; ++j) {
cout << "* ";
}
for(int j = 0; j < 2 * i - 1; ++j) {
cout << " ";
}
for(int j = 0; j < n - i; ++j) {
cout << "* ";
}
cout << endl;
}
}
