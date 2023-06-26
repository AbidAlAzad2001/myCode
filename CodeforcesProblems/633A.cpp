#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c;
    cin>>c;
    int x,y,cnt=0;
    bool v = false;
    for(x=0;x<=(c/a);x++){
        for(y=0;y<=(c/b);y++)
        {
            if(x*a + y*b == c)
                v= true;
        }
    }
    if(v)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}