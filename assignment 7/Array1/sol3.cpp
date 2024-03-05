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
    int x = arr[0];
    int min;
    for(int i =1;i<=n-1;i++)
    {
        if(arr[i]<x)  min=arr[i];
    }
    cout<<min;
}