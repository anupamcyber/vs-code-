#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    int max = -9999;
    int a, b;
    int gcd(int a, int b)
    {
        int result = min(a, b); // Find Minimum of a nd b
        while (result > 0)
        {
            if (a % result == 0 && b % result == 0)
            {
                break;
            }
            result--;
        }
        return result; // return gcd of a nd b
    }
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 1; i <= m; i++)
        {
            for (int j = i; j <= n; j++)
            {
                if (gcd(i, j) >= n)
                {
                    if ((i - j) > max)
                    {
                        a = i;
                        b = j;
                        max = i - j;
                    }
                }
            }
        }
        cout << a << " " << b << endl;
    }
    return 0;
}
}
