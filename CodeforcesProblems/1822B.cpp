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
        vector<long long>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        long long mx = max(a[0]*a[1] , a[n-2]*a[n-1]);
        cout<<mx<<endl;
    }

    return 0;
}
