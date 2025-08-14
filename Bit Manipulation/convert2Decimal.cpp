#include <iostream>
#include <string>
using namespace std;

int convert2Decimal(const string &x)
{
    int len = x.length();
    int p = 1;   // power of 2
    int num = 0; // result

    for (int i = len - 1; i >= 0; i--)
    {
        if (x[i] == '1')
        {
            num += p;
        }
        p *= 2;
    }
    return num;
}

int main()
{
    string bin;
    cout << "Enter the binary number: ";
    cin >> bin;
    cout << convert2Decimal(bin);
    return 0;
}
