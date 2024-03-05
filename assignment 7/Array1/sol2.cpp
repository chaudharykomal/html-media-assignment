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
    int min = INT8_MAX;
    for(int i =0;i<=n-1;i++){
        if(min>arr[i]&& arr[i]!=min)  min=arr[i];

    }
    int secontlargest=min;
    cout<<secontlargest;
}