#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v){
    int n=v.size();

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(v[j]>v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }

}          
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;

    cout<<"Enter the elements:";
    vector< int > v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    bubbleSort(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}