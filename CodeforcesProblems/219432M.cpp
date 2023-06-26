#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int v = true;
    for(int i=a;i<=b;i++)
    {
        int s = i;
        bool flag = true;
        while(s>0)
        {
            int x = s % 10;
            if(x!=4 && x!=7)
                flag = false;
            s/=10;
        }
        if(flag){
            cout<<i<<" ";
            v = false;
        }
    }
    if(v)
        cout<<-1<<endl;

    return 0;
}