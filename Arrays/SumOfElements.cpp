#include<iostream>
using namespace std;

int addarray(int arr[], int n){

    int s=0;
    for(int i=0 ; i<n ;  i++){
        s=s+arr[i];
    }
    return s;
}

int main(){
    int n;
    cout<<"Enter the Size of Array";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of Array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=addarray(arr,n);
    cout<<result;
}