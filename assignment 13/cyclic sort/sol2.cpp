#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> findErrorNums(vector<int>& a) {
int i = 0;
int n = a.size();
for(int i=0;i<n;i++){
while(a[i] != a[a[i]-1]) swap(a[i] , a[a[i]-1]);
}
for(int i=0;i<a.size();i++){
if(i+1 != a[i]){
return {a[i] , i + 1};
}
}
return {};
}
}
