#include<iostream>
using namespace std;

void pattern7(int n){
for(int i=0;i<n;i++){
    for(int x=0;x<=n-i-1;x++){
        cout<<" ";
    }
    for(int j=0;j<2*i+1;j++){
            cout<<"*";
    }
    for(int k=0;k<=n-i+1;k++){
                cout<<" ";
     }
        
    cout<<endl;
    
}
}

int main(){
    int n;
    cin>>n;
    pattern7(n);
}

// output
// 5
//      *       
//     ***
//    *****     
//   *******
//  *********