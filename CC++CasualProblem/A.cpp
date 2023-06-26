#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        long long sum1=0,sum2=0;
        vector<int>x(a);
        vector<int>y(b);
        for(int i=0;i<a;i++)
        {
            cin>>x[i];
            sum1+=x[i];
        }
        for(int i=0;i<b;i++)
        {
            cin>>y[i];
            sum2+=y[i];
        }
        if(sum1>sum2)
            cout<<"Tsondu\n";
        else if(sum1 == sum2)
            cout<<"Draw\n";
        else 
            cout<<"Tenzing\n";
    }

    return 0;
}