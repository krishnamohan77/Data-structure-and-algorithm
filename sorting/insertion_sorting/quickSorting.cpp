#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &v, int low, int high){
    int i=low;
    int j=high;
    int pivot=v[i];

    while(i<j){
        while(v[i]<=pivot && i< high){
            i++;
        }
        while(v[j]>pivot && j>= low){
            j--;
        }
        if(i<j) swap(v[i], v[j]);    
    }
    swap(v[low], v[j]);

    return j;
}
void quick_Sorting(vector<int> &arr, int low, int high){
    if(low<high){
        int partition=f(arr, low, high);
        quick_Sorting(arr, low, partition-1);
        quick_Sorting(arr, partition+1, high);
    }
}

int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    
    vector<int> arr(n);
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    quick_Sorting(arr, 0, n-1);
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}   


