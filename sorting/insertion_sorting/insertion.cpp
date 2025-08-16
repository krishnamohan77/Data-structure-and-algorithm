#include <bits/stdc++.h>
using namespace std;

void insertionSorting(vector<int> &v)
{
    int n = v.size();

    // find the correct position for current Element
    for (int i = 1; i < n; i++)
    {
        int curElm = v[i];

        int j = i - 1;
        while (j >= 0 && v[j] > curElm)
        {
            v[j + 1] = v[j];
            j--;
        }

        // intsert the current element
        v[j + 1] = curElm;
    }
}
int main()
{
    int n;

    cout << "Enter the size of an array";
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    insertionSorting(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}