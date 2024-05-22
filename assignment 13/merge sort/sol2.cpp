#include<iostream>
#include<vector>
using namespace std;
int main(){
int ans = 0;
void merge(vector<int> &a, int low, int mid, int high) {
int i = low, j = mid+1;
while(i <= mid && j <= high) {
if((long long)a[i] > (long long)2*a[j]) {
ans += mid - i + 1;
j++;
} else {
i++;
}
}
i = low, j = mid+1;
vector<int> b;
while(i <= mid && j <= high) {
if(a[i] < a[j]) b.push_back(a[i++]);
else b.push_back(a[j++]);
}
}
}

