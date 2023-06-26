#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1 = "";
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                s[i]+=32;
        }
        s.erase(unique(s.begin(),s.end()),s.end());
        if(s=="meow")
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
