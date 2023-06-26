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
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int odd = 0;
        int even = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
                even++;
            else
                odd++;
        }
        int nOdd = 0,nEven = 0;
        if((odd>=3 && even>=0) || (odd>=1 && even>=2))
        {
            cout<<"YES\n";
            int nOdd=0,nEven=0;
            if((odd>=3 && even>=0))
            {
                for(int i=0;i<n;i++)
                {
                    if(arr[i]%2!=0 && nOdd<3)
                    {
                        cout<<i+1<<" ";
                        nOdd++;
                    }
                }
                cout<<"\n";
            }
            else
            {
                for(int i=0;i<n;i++)
                {
                    if(arr[i]%2!=0 && nOdd<1)
                    {
                        cout<<i+1<<" ";
                        nOdd++;
                    }
                    else if(arr[i]%2==0 && nEven<2)
                    {
                        cout<<i+1<<" ";
                        nEven++;
                    }
                }
                cout<<"\n";
            }
        }
        else
            cout<<"NO\n";
    }

    return 0;
}
