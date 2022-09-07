#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int s;
        cin >> s;
        int x = 1, y = -1;
        while (x+y<s)
        {
            x += 1;
        }
        cout << x * y << endl;
    }
    return 0;
}