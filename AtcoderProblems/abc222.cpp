#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k = s.size();
    if(k<4)
    {
        int k1=4-k;
        while(k1--)
            cout<<'0';
        cout<<s<<endl;
    }
    else
        cout<<s<<endl;

    return 0;
}