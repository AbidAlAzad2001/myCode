#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int q=0,a=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='Q')
            q++;
        else if(str[i]=='A')
            a++;
    }

    return 0;
}
