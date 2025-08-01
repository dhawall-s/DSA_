#include<iostream>
using namespace std;

int l_search(int arr[],int n,int search){
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i] ==  search){
            cout<<"Element present at"<<i+1;
            found = true;
        }
    }   
    if(!found){
        cout<<"element not present"<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the no. of elements of array";
    cin>>n;
    int arr[n];
    int search;
    cout<<"Enter the Elements Of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to Search in an Array";
    cin>>search;
    l_search(arr,n,search);
    

}