#include<bits/stdc++.h>
using namespace std;

void optimize(vector<int> &v)  {
    int n=v.size();
    for(int i=0; i<n-1; i++){
        int flag=false;
        for(int j=0; j< n-i-1; j++){
            if(v[j]>v[j+1])
            {
                flag=true;
                swap( v[j], v[j+1]);
            }   
        }
        if(!flag) break;
    }
}         
int main()
{
    int n;
    cout<<"Enter the size of vector :";
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    optimize(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}