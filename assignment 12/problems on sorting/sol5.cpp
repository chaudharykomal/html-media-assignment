#include <iostream>
using namespace std;
int main() {
int a[5]={10, 5, 4, 3, 2};
int l = 0, r = 1e9;
int n=5;
for (int i = 0; i < n - 1; i++) {

if (a[i] < a[i + 1]) {
r = min(r, (a[i] + a[i + 1]) / 2);
}
else if (a[i] > a[i + 1]) {
l = max(l, (a[i] + a[i + 1] + 1) / 2);
}
}
if (l > r) {
cout << "-1";
}
else
cout << l << endl;
return 0;
}