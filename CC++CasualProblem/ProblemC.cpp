#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int a=0,b=0,A=0,B=0,res;
    for(int i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        if(s[i]=='a')
            a++;
        else{
            b++;
        }
        if(s[j]=='a')
            A++;
        else{
            B++;
        }
        if(b>k || B>k)
            break;
        res=max(a+b,A+B);
    }
//    cout<<res;
cout<<a+b;
cout<<A+B;

    return 0;
}
