#include <bits/stdc++.h>
using namespace std
int main() {
int n;
cin >> n;
for(int i = 0; i < 2 * n - 1; ++i) {
for(int j = 0; j < 2 * n - 1; ++j) {
if(i == n-1 || j == n-1 || i+j == n-1 || j-i == n-1 || i - j ==
n-1 || i
+ j == 3 * (n-1)) {
cout << "* ";
} else {
cout << " ";
}
}
cout << endl;
}
return 0;
}
