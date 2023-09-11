// fibonacci series using by reccursion...

#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    // cout << "n = " << n << endl;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int res = fibo(n - 1) + fibo(n - 2);
    // cout << "result = " << res << endl;
    return res;
}

int main()
{
    cout << fibo(5) << endl;
}