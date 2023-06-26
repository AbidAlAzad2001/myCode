#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    if((a-b)>1 || (b-a)>1)
    {
        if(a>b)
            cout<<2*c+a-(a-b)+b+1<<"\n";
        else
            cout<<2*c+b-(b-a)+a+1<<"\n";
    }
    else
        cout<<2*c+a+b<<"\n";

    return 0;
}
