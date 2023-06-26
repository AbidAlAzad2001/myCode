#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i=0,j=0,mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        mn=min(mn,a[i]);
        j++;
        if(j==k)
        {
            cout<<mn<<" ";
            j=0;
            mn=INT_MAX;
        }
        else if(i==n-1 && j<k)
        {
            cout<<mn;
        }
    }

    return 0;
}