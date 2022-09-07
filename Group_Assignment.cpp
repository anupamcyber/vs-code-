
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i; i < N; i++)
        {
            cin >> arr[i];
        }
        int arrnew[N] = {0};
        for (int i = 0; i < N; i++)
        {
            arrnew[arr[i] - 1] += 1;
        }
        int k = 0;
        for (int i = 0; i < N; i++)
        {
            if (arrnew[i] == (i + 1) || arrnew[i] == 0)
                k++;
        }
        for (int i = 0; i < N; i++)
        {
            if (k == N)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
