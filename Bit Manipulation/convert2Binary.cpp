#include <iostream>
#include <algorithm>
using namespace std;

string convert2Binary(int n)
{
    if (n == 0)
        return "0";

    string res = "";
    while (n > 0)
    {
        if (n % 2 == 1)
            res += "1";
        else
            res += "0";
        n /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << convert2Binary(n);
    return 0;
}
