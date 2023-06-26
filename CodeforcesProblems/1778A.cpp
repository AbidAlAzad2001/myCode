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
        vector<int>v(n);
        int N=0,P=0,sum=0,flag=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sum = accumulate(v.begin(),v.end(),0);
        for(int i=0; i<n-1; i++)
        {
            if(v[i]==-1 && v[i+1]==-1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<sum+4<<"\n";
        else
        {
            if(count(v.begin(),v.end(),1)==n)
                cout<<sum-4<<"\n";
            else
                cout<<sum<<"\n";
        }
    }

    return 0;
}
