#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string s, int l,int r)
{
    while(l<=r)
    {
        if(s[l]!=s[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main()
{
    string s;
    cin>>s;
    int l=0,r=s.size()-1;
    if(is_palindrome(s,l,r))
    {
        cout<<s<<endl;
        cout<<"YES\n";
    }
    else
    {
        string s1 = "";
        for(int i=r;i>=0;i--)
            s1+=s[i];
        // cout<<s1<<endl;
        int num=stoi(s1);
        cout<<num<<endl;
        cout<<"NO\n";
    }

    return 0;
}