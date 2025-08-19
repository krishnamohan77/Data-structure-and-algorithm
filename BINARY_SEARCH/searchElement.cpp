#include <bits/stdc++.h>
using namespace std;

//This is iterative approach

    // void binarySearch(vector<int> &a, int n, int target) {
    //     int low = 0;
    //     int high = n - 1;
        
    //     while (low <= high) {
    //         int mid = (low + high) / 2;
            
    //         if (a[mid] == target) {
                
    //             cout<<"Element found at index "<<mid;
    //             break; 
    //         } else if (target > a[mid]) {
    //             low = mid + 1;
    //         } else {
    //             high = mid - 1;
    //         }
    //     }

    //     if(low>high){

    //        cout << "Element not found" << endl;
    //     }

    // }

    // int main() {
    //     int n;
    //     cout << "Enter the size of the array: ";
    //     cin >> n;

    //     vector<int> arr(n);

    //     cout << "Enter the elements of the array: ";
    //     for (int i = 0; i < n; i++) {
    //         cin >> arr[i];
    //     }

    //     int k;
    //     cout << "Enter the value to search for: ";
    //     cin >> k;
    //     binarySearch(arr, n, k);
    //     return 0;
    // }

// Recursive implementation

    int bs(vector<int> &arr, int low, int high, int target){
        // Base case
        if(low>high) return -1;

        int mid=(low+high);
        if(arr[mid]==target) return mid;

        else if(target>arr[mid]) return bs(arr, mid+1, high, target);
        
        return bs(arr, low, mid-1, target);
    }
    int main() {
        int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        vector<int> a(n); 
        int target;
        cout<<"Enter the element of an array:";

        for(int i=0; i<a.size(); i++){
            cin>>a[i];
        }
        cout<<"Enter the element that we find:";
        cin>>target;

        cout<<target<<" is at index "<<bs(a, 0, a.size()-1, target);
    }
