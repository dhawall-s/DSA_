#include<iostream>
using namespace std;

void pattern8(int n){
for(int i=0;i<n;i++){
    for(int x=0;x<=i;x++){
        cout<<" ";
    }
    for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
    }
    for(int k=0;k<=i;k++){
                cout<<" ";
     }
    cout<<endl;
    
}
}

int main(){
    int n;
    cin>>n;
    pattern8(n);
}


// 5
//  ********* 
//   *******
//    *****
//     ***    
//      *