#include <bits/stdc++.h> 
using namespace std;

//Brute Force solution TC->O(nlogn + n) using sorting function
// int secondLargest(int n, vector<int> arr) {
//     sort(arr.begin(), arr.end());
//     int lar;
//     for(int i=0; i<n; i++){
//         lar=arr[n-1];
//     }
//     int sLar;
//     for(int i=n-2; i>0; i--){
//         if(arr[i]!=lar){
//             sLar=arr[i];
//             break;
//         }
//     }
//     return sLar;
// }

//best way to using sorting function
int secondLargest(int n, vector<int> arr) {
    sort(arr.begin(), arr.end());
    int result=-1;
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[n-1]){
            result=arr[i];
        }
    }
    return result;
}
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of an array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"second largest element is "<<secondLargest(n, arr);
}