#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string s)
{
    int l=0,r=s.size()-1;
    while(l<=r)
    {
        if(s[l]!=s[r])
            return false;
        l++;
        r--;
    }
    return true;
}

int main()
{
    string s;
    cin>>s;
    if(is_palindrome(s))
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}