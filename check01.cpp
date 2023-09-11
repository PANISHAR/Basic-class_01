#include <bits/stdc++.h>
using namespace std;
void count(int n)
{
    // cout << "n = " << n << endl;
    if (n == 0)
    {
        cout << "0 base" << endl;
    }
    else
    {
        cout << n << endl;
        count(n - 1);
        cout << n << endl;
    }
}

int main()
{
    count(6);
}