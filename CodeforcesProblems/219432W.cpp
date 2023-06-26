#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s = n-1;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=s;k++)
            cout<<" ";
        for(int j=1;j<=i*2-1;j++)
            cout<<"*";
        cout<<"\n";
        s--;
    }
    s = 1;
    for(int i=n;i>=1;i--)
    {
        for(int k=1;k<s;k++)
            cout<<" ";
        for(int j=i*2-1;j>=1;j--)
            cout<<"*";
        cout<<"\n";
        s++;
    }

    return 0;
}