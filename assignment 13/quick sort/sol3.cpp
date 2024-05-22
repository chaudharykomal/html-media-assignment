#include<iostream>
using namespace std;
int main() {
int n;
cin >> n;
int a[n];
for (int i = 0; i < n; i++) {
cin >> a[i];
}
int idx1 = -1, idx2 = -1;
int maxLen = 0;
int currLen = 0;
for (int i = 0; i < n - 1; i++) {
if (a[i] > a[i + 1]) {
if (idx1 == -1) {
idx1 = i;
idx2 = i + 1;
currLen = 2;
} else {
idx2 = i + 1;
currLen++;
}
} else {
if (currLen > maxLen) {
maxLen = currLen;
}
idx1 = idx2 = -1;
currLen = 0;
}
}
if (currLen > maxLen) {
maxLen = currLen;
}
cout << "Length of the longest decreasing subarray: " << maxLen
<< endl;
return 0;
}