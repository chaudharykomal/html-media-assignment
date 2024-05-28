#include <bits/stdc++.h>
using namespace std;
const long long P = 1e9 + 7;
const long long N = 2e5 + 5;
long long fact[N], invfact[N];
long long power(long long a, long long b) {
    long long res = 1;
while (b > 0) {
if (b % 2) {res = res * a % P;}
a = a * a % P;
b >>= 1;
}
return res % P;
}
long long inverse(long long a) {
return power(a, P - 2);
}
void precompute() {
fact[0] = fact[1] = 1;
for (long long i = 2; i < N; i++) {
fact[i] = fact[i - 1] * i;
fact[i] %= P;
}
invfact[N - 1] = inverse(fact[N - 1]);
for (long long i = N - 2; i >= 0; i--) {
invfact[i] = invfact[i + 1] * (i + 1);
invfact[i] %= P;
}
}
long long nCr(long long x, long long y) {
if (y > x)
return 0;
long long num = fact[x];
num *= invfact[y];
num %= P;
num *= invfact[x - y];
num %= P;
return num;
}

int main() {
precompute();
long long n, r;
cin >> n >> r;
cout << nCr(n, r) << '\n';
}