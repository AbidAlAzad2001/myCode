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
        for(int i=0;i<n;i++)
        {
            char c = s[i];
            for(int j=i+1;j<n;j++)
            {
                if(c == s[j])
                {
                    cout<<c;
                    i=j;
                    break;
                }
            }
        }
        cout<<endl;
    }

    return 0;
}