#include<bits/stdc++.h>
using namespace std;
void merge(std::vector<int> &a, int low, int mid, int high) {
std::vector<int> b;
int i = low;
int j = mid + 1;
while (i <= mid && j <= high) {
if (a[i] > a[j]) b.push_back(a[i++]);
else b.push_back(a[j++]);
}
while (i <= mid) {
b.push_back(a[i++]);
}
while (j <= high) {
b.push_back(a[j++]);
}
}