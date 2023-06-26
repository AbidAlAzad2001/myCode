#include<bits/stdc++.h>
using namespace std;

void isValid(string s)
{
    vector<char>v;
    int highest = 0;

    int n = s.size();
    for(int i=0; i<n; i++)
    {
        if((int)v.size() == 0)
            v.push_back(s[i]);
        else
        {
            char ch1 = v.back();
            if((ch1=="("||ch1=="{"||ch1=="[")&&(s[i]==")"||s[i]=="}"&&s[i]=="]"))
            {
                bool found = true;
                int cnt = 0;
                int cnt1 = 0;
                cnt1++;
                while(found)
                {
                    char ch = v.back();
                    if(ch == "(" && s[i] == ")")
                    {
                        v.pop_back();
                        cnt++;
                    }
                    else if(ch == "{" && s[i] == "}")
                    {
                        v.pop_back();
                        cnt++;
                    }
                    else if(ch == "[" && s[i] == "]")
                    {
                        v.pop_back();
                        cnt++;
                    }
                    else
                        found = false;
                    i++;
                }
            }
            else
                v.push_back(s[i]);
        }
        if(cnt>highest)
            highest = cnt;
    }
    cout<<highest*2<<" "<<cnt1;
}

int main()
{
    string str;
    cin>>str;
    isValid(str);

    return 0;
}
