#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll i,j,k,n,m;
        cin>>n;
        vector<vector<long long>>Ans(2, vector<long long>(n));
        ll mx = 2*n;
        Ans[0][0]=mx;
        Ans[1][n-1]=mx-1;
        ll Front=1,Back=mx-2;
        for(i=0;i<n-1;i++)
        {
            if(i&1)
            {
                Ans[1][i] = Back-1;
                Ans[0][i+1]=Back;
                Back-=2;
            }
            else
            {
                Ans[1][i]=Front;
                Ans[0][i+1]=Front+1;
                Front+=2;
            }
        }
        for(i=0;i<2;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<Ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
