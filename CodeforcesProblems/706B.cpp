#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,x,y;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    int m;
    cin>>m;
    while(m--)
    {
        cin>>x;
        y=upper_bound(a,a+n,x)-a;
        cout<<y<<endl;
    }
}

