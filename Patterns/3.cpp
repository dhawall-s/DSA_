#include<iostream>
using namespace std;

void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
    cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
    cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern3(n);
}

// output
// 5
// 1
// 12
// 123
// 1234
// 12345
// 1
// 12
// 123
// 1234
// 12345