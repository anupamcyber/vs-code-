#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count0 = 0, count1 = 0;
        int l;
        string s;
        cin >> l >> s;
        for (int i = 0; i < l; i++)
        {
            if(s[i] == '0')
                count0++;

        }
        count1 = l - count0;
        int min = (count1 >= count0) ? count0 : count1;
        cout << min << endl;
    }
    return 0;
}
