#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	int k;
	cin>>k;
	sort(a.begin(),a.end());
	reverse(a.begin(),a.end());
	int sum = 0,j=0,mx=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(j<k-1)
		{
			if(a[i]>0)
			sum+=a[i];
			j++;
		}
		else
		{
			if(a[i]>=)
			sum+=a[i];
			mx=max(mx,sum);
			j=0;
			sum=0;
		}
	}
	cout<<mx<<endl;

    return 0;
}

// https://ideone.com/bUk4Q1

// void solve()
// {
//     string s;
//     cin >> s;
//     while (true)
//     {
//         if (s.find("EGYPT") != string::npos)
//         {
//             int idx = s.find("EGYPT");
//             s.replace(idx, 5, " ");
//         }
//         else
//             break;
//     }
//     cout << s << '\n';
// }