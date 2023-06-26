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
        long long int sum = 0;
        vector<int>a(n);
        int mn = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mn = min(mn,a[i]);
        }
        if(a.size() == 1)
        {
            cout<<0<<endl;
            continue;
        }
        for(int i=0;i<n;i++)
        {
            sum+=a[i]-mn;
        }
        cout<<sum<<endl;
    }

    return 0;
}