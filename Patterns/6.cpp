#include<iostream>
using namespace std;

void pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<n-i+2;j++){
            cout<<j;
        }
    cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern6(n);
}

// output   
// 5
// 12345
// 1234
// 123
// 12
// 1