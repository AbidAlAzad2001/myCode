#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,t;
        cin>>n>>t;
        vector<int>a(n),b(n);
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int mx=-1,mn=-1,x;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            if(a[i]+i-1<=t)
            {
                if(mx<x)
                {
                    mx=x;
                    mn=i;
                }
            }
        }
        cout<<mn<<endl;
    }

    return 0;
}
