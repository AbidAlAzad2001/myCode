#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int mn = INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mn = min(mn,a[i]);
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(mn == a[i])
            cnt++;
    }
    if(cnt%2 != 0)
        cout<<"Lucky\n";
    else
        cout<<"Unlucky\n";

    return 0;
}