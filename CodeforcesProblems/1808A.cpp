#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        int pos=0,ans=-1;
        for(int i=l;i<=r;i++)
        {
            int mx=0,mn = INT_MAX;
            int x = i;
            while(x)
            {
                mx = max(mx,x%10);
                mn = min(mn,x%10);
                x/=10;
            }
            if(mx-mn>ans){
                ans=mx-mn;
                pos=i;
            }
            if(ans==9)
                break;
        }
        cout<<pos<<"\n";
    }

    return 0;
}
