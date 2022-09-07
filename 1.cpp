#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int c;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] == 1 && arr[n - 1] == n)
            cout << 0 << endl;
        else
        {
            c = 0;
            for (int a = 0; a < n; a++)
            {
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] > arr[i + 1])
                    {

                        swap(arr[i], arr[i + 1]);
                        c++;
                    }
                }
                
            }
            cout << c << endl;
        }
    }

    return 0;
}
