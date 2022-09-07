#include <bits/stdc++.h>
using namespace std;
// long long gc(lo)
int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long a, b;
        cin >> a >> b;
        if (a < 2 || b < 2)
        {
            cout << "-1\n";
        }
        else if (__gcd(a, b) == 1)
        {
            cout << "1\n";
        }
        else
            cout << "0\n";
    }

    return 0;
}
