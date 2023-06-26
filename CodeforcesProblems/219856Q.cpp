
#include<bits/stdc++.h>
using namespace std;
int main()
{	
	string s;
	getline(cin,s);
	int i=0;
	string s1 = "";
	int n = s.size();
	while(i<n)
	{
		if(s[i]!=' ')
			s1+=s[i];
		if(i == n-1)
		{
			reverse(s1.begin(),s1.end());
			cout<<s1;
		}
		if(s[i]==' ')
		{
			reverse(s1.begin(),s1.end());
			cout<<s1<<" ";
			s1 = "";
		}
		i++;
	}


    return 0;
}