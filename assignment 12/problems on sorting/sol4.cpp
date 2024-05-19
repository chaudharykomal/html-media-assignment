#include <iostream>
using namespace std;
int main() {
int A[6]={2,6,3,12,56,8};
int size=6;
int k=3;
int i,j,key;
for (i = 1; i < size; i++) {
key = A[i];
j = i - 1;
while (j >= max(0, i - k) && A[j] > key) {
A[j + 1] = A[j];
j--;
}
A[j + 1] = key;
}
for(int i=0; i<size; i++)
cout<<A[i]<<" ";
cout<<endl;
return 0;
}