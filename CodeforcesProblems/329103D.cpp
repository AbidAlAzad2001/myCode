#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int cnt=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        int x = a[i]+ 1;
        for(int  j=i+1;j<n;j++)
        {

            if( x == a[j]){
                cnt++;
				break;
				// cout<<x<<" "<<a[j]<<endl;
			}
        }
    }
    cout<<cnt<<endl;

    return 0;
}


