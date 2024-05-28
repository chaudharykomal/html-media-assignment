#include <bits/stdc++.h>
using namespace std;

int binpow(int a, int b, int m) {
int ans = 1;
while (b)
{
if (b & 1)
ans = (ans * a) % m;
b /= 2;
a = (a * a) % m;
}
return ans;
}
int32_t main() {
int a, b, c, d;
cin >> a >> b >> c >> d;
const int M = 1e9 + 7;
cout << binpow(a, binpow(b, binpow(c, d, M), M), M);
}