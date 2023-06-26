#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int a[4];
        for(int i=1;i<=3;i++)
        {
            cin>>a[i];
        }
        if(a[x]==0)
            cout<<"NO\n";
        else if(a[a[x]]==0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

    return 0;
}
