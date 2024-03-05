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
    for(int i =1;i<=n-1;i++)
    {
        if(arr[i]==x){
            cout<<"yes it have duplicates";
        }
        else 
        cout<<"no it not contain duplicates";
    }
}