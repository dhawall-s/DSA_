#include <iostream>
#include <algorithm>
#include <limits.h>
#include <vector>
using namespace std;

int min_diff(vector <int>&arr ,int m){
    int s=arr.size();
    sort(arr.begin(),arr.end());
    int mindif=INT_MAX;

    for (int i=0;i+m-1<s;i++){
        int diff=arr[i+m-1]-arr[i];
    if(diff<mindif){
         mindif=diff;
    }
    }
    return mindif;
}

int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    vector <int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<min_diff(arr,m);

}

    
