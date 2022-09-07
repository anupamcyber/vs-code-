#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(t--)
    {
        int count=0,n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            if(arr[i]<x)
            count++;
        }
        cout<<count;

    }
}
