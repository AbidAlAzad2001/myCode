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
        for(int i=0;i<n;i++)    
            cin>>a[i];
        int mn = INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int sum = a[i] + a[j] + j - i;
                mn = min(mn, sum);
            }
        }
        cout<<mn<<endl;
    }

    return 0;
}