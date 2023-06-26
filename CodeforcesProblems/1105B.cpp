#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>a(26);
    int cnt=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(k == 1)
        {
            a[s[i]-'a']++;
        }
        else
        {
            if(s[i]==s[i+1])
                cnt++;
            if(cnt == k)
            {
                a[s[i-1]-'a']++;
                cnt=1;
            }
        }
    }
    int mx = a[0];
    for(int i=0; i<26; i++)
        mx = max(a[i],mx);
    cout<<mx<<"\n";

    return 0;
}
