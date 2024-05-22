#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> findDuplicates(vector<int>& a) {
int n = a.size();
for(int i=0;i<n;i++){
while(a[i] != a[a[i]-1])swap(a[i] , a[a[i]-1]);
}
vector<int>b;
for(int i=0;i<n;i++){
if(i+1 != a[i])b.push_back(a[i]);
}
return b;
}
}