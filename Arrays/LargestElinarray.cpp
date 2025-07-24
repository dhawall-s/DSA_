#include<iostream>
#include<vector>

using namespace std;

int largest(int arr[],int n){
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"Largest Element is:";
    return largest;
}

int main(){
    int n;
    cout<<"Enter the size of an array";
    cin>>n;
    cout<<endl;
    int arr[n];
    cout<<"Enter the Elements of an array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largest(arr,n);
}