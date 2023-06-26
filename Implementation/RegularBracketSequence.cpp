#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        char now = s[i];
        if(now == '(' || now == '{' || now == '[')
            {
                st.push(now);
            }
        else
        {
            if(st.empty())
            {
                cout<<"No\n";
                return 0;
            }
            if(now == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if(now == '}' && st.top()=='{')
            {
                st.pop();
            }
            else if(now == ']' && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                cout<<"No\n";
                return 0;
            }
        }
    }
    if(st.empty())
        cout<<"Yes\n";
    else
        cout<<"No\n";

    return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//
//int isValid(string s)
//{
//    vector<char>v;
//    bool found = true;
//
//    int n = s.size();
//    for(int i=0;i<n;i++)
//    {
//        if((int)v.size()==0)
//            v.push_back(s[i]);
//        else
//        {
//            char ch = v.back();
//            if(ch == '(' && s[i] == ')')
//            {
//                v.pop_back();
//            }
//            else if(ch == '{' && s[i] == '}')
//            {
//                  v.pop_back();
//            }
//            else if(ch == '[' && s[i] == ']')
//            {
//                v.pop_back();
//            }
//            else if(ch == '?' && s[i] == '?')
//            {
//                v.pop_back();
//            }
//            else
//            {
//                v.push_back(s[i]);
//            }
//        }
//    }
//    if(v.size() == 0)
//        found = true;
//    else
//        found = false;
//    return found;
//}
//
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--){
//     string str;
//     cin>>str;
//     if(isValid(str))
//        cout<<"YES"<<"\n";
//     else
//        cout<<"NO"<<"\n";
//    }
//
//}
