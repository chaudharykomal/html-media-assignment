#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
vector<int> v(n);
for (int i = 0; i < n; i++) {
cin >> v[i];
}
int b = 0;
for (int i = 0; i < n; i++) {
b ^= v[i];
}
int a;
if (b == v[0]) {
a = v[1];
} else {
a = v[0];
}
cout << a << " " << b << '\n';
}