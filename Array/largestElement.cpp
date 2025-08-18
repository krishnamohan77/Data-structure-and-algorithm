#include <bits/stdc++.h> 
using namespace std;

//TC->O(nlogn)
// int largestElement(vector<int> &arr, int n) {
//     // Write your code here.
//     sort(arr.begin(), arr.end());
//     int lar;
//     for(int i=0; i<n; i++){
//         lar=arr[n-1];
//     }
//     return lar;
// }


//Optemize code  tc->O(n)
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int lar=arr[0];
    for(int i=0; i<n; i++){
        if(lar<arr[i]){
            lar=arr[i];
        }
    }
    return lar;
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
    cout<<"Largest element of an array:"<<largestElement(arr, n);
}