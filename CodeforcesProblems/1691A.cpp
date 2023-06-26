#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,e=0,o=0;
        cin>>n;
        int a;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a%2==0)
                e++;
            else
                o++;
        }
        cout<<min(o,e)<<"\n";
    }

    return 0;
}
