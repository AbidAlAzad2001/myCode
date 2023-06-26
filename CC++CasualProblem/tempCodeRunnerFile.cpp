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
        vector<int>a(n);
        int a=0,b=0,c=0,d=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i%2 == 0)
            {
                if(a[i]%2==0)
                    a=1;
                else
                    b=1;
            }
            else
            {
                if(a[i]%2==1)
                    c=1;
                else
                    d=1;
            }
        }
        if(a and b)
            cout<<"NO\n";
        else if(c and d)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

    return 0;
}