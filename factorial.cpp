// factorial code using reccursion...

#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    cout << "n = " << n << endl;
    if (n == 0)
    {
        return 1;
    }
    else
    {

        int res = fact(n - 1) * n;
        cout << "result = " << res << endl;
        return res;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << fact(5) << endl;
    return 0;
}