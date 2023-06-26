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
        int a[26];
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++)
        {
            if(a[s[i]-'A']==0)
            {
                a[s[i]-'A']+=2;
            }
            else
            {
                a[s[i]-'A']++;
            }
        }
        int cnt=0;
        for(int i=0;i<26;i++)
            if(a[i]>0)
                cnt+=a[i];
        cout<<cnt<<endl;
    }

    return 0;
}