// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];

//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     int i = 0;
//     for(int j = 1; j < n; j++){
//         if(arr[i] != arr[j]){
//             i++;
//             arr[i] = arr[j];
//         }
//     }

//     cout << "Number of unique elements: " << i + 1 << endl;

//     cout << "Unique elements: ";
//     for(int k = 0; k <= i; k++){
//         cout << arr[k] << " ";
//     }
//     cout << endl;

//     return 0;
// }




#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<i+1;

}