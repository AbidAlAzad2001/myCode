#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int e=0,od=0,N=0,p=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] % 2 == 0)
            e++;
        else    
            od++;
        if(a[i]<0)
            N++;
        else if(a[i]>0)
            p++;
    }
    cout<<"Even: "<<e<<endl;
    cout<<"Odd: "<<od<<endl;
    cout<<"Positive: "<<p<<endl;
    cout<<"Negative: "<<N<<endl;
    

    return 0;
}