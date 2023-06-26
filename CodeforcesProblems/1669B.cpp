#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            a[x]++;
        }
        int mx = -1;
        for(int i=1;i<=n;i++)
        {
            if(a[i] >= 3)
                mx = max(mx, i);
        }
        cout<<mx<<endl;
    }

    return 0;
}