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
//  int t;
//  cin>>t;
//  while(t--) {
//   string s,s1;
//   cin>>s;
//   stack<char>st,st1;
//
//   int cnt1=count (s.begin(),s.end(),'?');
//
//
//   for(int i=0;i<s.size();i++)
//   {
//       if(s[i]=='?')
//        st1.push(s[i]);
//
//       else if(st.empty())
//        st.push(s[i]);
//
//       else if(st.top()=='(' and s[i]==')')
//       st.pop();
//
//       else
//            st.push(s[i]);
//
//
//   }
//
//   cout<<cnt1<<endl;
//
//    if((st.empty () and cnt1%2==0) || (st.size and cnt1%2==0))
//
//        cout<<"YES"<<endl;
//     else
//        cout<<"NO"<<endl;
//
//  }
//}
//#include<bits/stdc++.h>
//using namespace std;
//
//vector<int>coins = {1,3,4};
//
//int coin_change(int n)
//{
//    if(n == 0)
//        return 0;
//    int ans = 1000000000;
//    for(int i=0;i<coins.size();i++)
//    {
//        if(n >= coins[i])
//        {
//            ans  = min(ans, 1+coin_change(n-coins[i]));
//        }
//    }
//    return ans;
//}
//
//int main()
//{
//    int n;
//    cin>>n;
//    cout<<coin_change(n);
//
//    return 0;
//}
//
