#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<bool>a(26,false);
    for(int i=0;s[i]!='\0';i++)
        a[s[i]-'a'] = true;
    for(int i=0;i<26;i++)
    {
        if(!a[i])
        {
            cout<<(char)(i+'a');
            return 0;
        }
    }
    cout<<"None\n";

    return 0;
}