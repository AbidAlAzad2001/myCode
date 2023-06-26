#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int a[26] = {0};  
	int n;
	cin>>n;
	for(int i=0;i<n;i++){ 
	    char c;
	    cin>>c;
		a[c - 'a']++;
	}
	for(int i= 0;i<=25;i++){ 
		while(a[i] != 0){
			cout<<(char)(i+97);
			a[i]--;
		}
	}
}