#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='E' and s[i+1]=='G' and s[i+2]=='Y' and s[i+3]=='P' and s[i+4]=='T')
        {
            i+=4;
            cout<<" ";
        }
        else
            cout<<s[i];
    }

    return 0;
}