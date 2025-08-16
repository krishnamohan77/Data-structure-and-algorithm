
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &v, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (v[left] <= v[right])
        {
            temp.push_back(v[left]);
            left++;
        }
        else
        {
            temp.push_back(v[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(v[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(v[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        v[i] = temp[i - low];
    }
}

void mg(vector<int> &v, int low, int high)
{

    // Base case
    if (low == high)
        return;

    int mid = (low + high) / 2;
    mg(v, low, mid);
    mg(v, mid + 1, high);
    merge(v, low, mid, high);
}

int  main()
{
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    vector<int> arr(n);
    // Write your code here.
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    mg(arr, 0, n - 1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}