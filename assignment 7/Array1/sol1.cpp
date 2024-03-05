#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    for(int i =0;i<=n-1; i++){
        cin>>arr[i];
    }
    int product = 1;
    for(int i =0 ; i<=n-1;i++){
        int product = product*arr[i];

    }
    cout<<product;
}