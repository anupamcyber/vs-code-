#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b, c, d, negative, addition, p, q;
        cin >> a >> b >> c >> d;
        int arr[4] = {a, b, c, d};
        sort(arr, arr + 4);
        if (arr[0]>=0)
        {
            cout << "-1 -1" << endl;
        }
        else{
            negative = arr[0];
            if (abs(arr[3] - arr[2]) == 1)

            {
                p = 1;
                q = p - negative;
            }
            else
            {
                addition = arr[2];
                p = (addition + negative) / 2;
                q = addition - p;
            }
            cout << p <<" "<<q << endl;
        }
        
    }
}
