#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,t,c(0);
    cin>>n>>m>>k;
    while(n--)
    {
        cin>>t;
        if(t==1)
            if(m>0)
                m--;
            else
                c++;
        else
            if(k>0)
                k--;
            else if(m>0)
                m--;
            else
                c++;
    }
    cout<<c<<endl;

    return 0;
}
