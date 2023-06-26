#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    long long int x = b / c*c;
    if(a<=x)
        cout<<x<<endl;
    else
        cout<<-1<<endl;

    return 0;
}