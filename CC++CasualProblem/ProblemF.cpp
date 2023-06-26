#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
        vector<int>arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int l=0,r=n-1,x=0,y=0,ans=0;
		while(l<=r){
			if(x == y)
                ans=max(ans,l+n+1-r);
            if(x<=y)
            {
                x+=arr[l];
                l++;
            }
            else if(y<x)
            {
                y+=arr[r];
                r--;
            }
		}
		cout<<ans<<endl;
	}
}