#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    if(A==B)
    {
        cout<<A+B<<endl;
        return 0;
    }
    int mx = max(A,B);
    cout<<mx+mx-1<<endl;

    return 0;
}