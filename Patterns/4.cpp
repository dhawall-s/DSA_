#include<iostream>
using namespace std;

void pattern4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1;
        }
    cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern4(n);
}


// output
// 5
// 1
// 22
// 333
// 4444
// 55555