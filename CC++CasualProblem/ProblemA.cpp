//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    int n;
//    cin>>n;
//    vector<int>v(n+1);
//    set<int>s;
//    for(int i=0;i<=n;i++)
//    {
//        cin>>v[i];
//        if(v[i]==0)
//            s.insert(i);
//    }
////    for(auto val : s)
////        cout<<val<<" ";
//    int q;
//    cin>>q;
//    while(q--)
//    {
//        int l,r;
//        cin>>l>>r;
//        auto it = s.lower_bound(l);
//        if(it!=s.end() && *it<=r)
//            cout<<0<<"\n";
//        else
//            cout<<1<<"\n";
//    }
//
//    return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int n;
//        cin>>n;
//        string s;
//        cin>>s;
//        stack<char>st;
//        for(int i=0; i<n; i++)
//        {
//            if(st.size()==0)
//                st.push(s[i]);
//            else{
//                char ch  = st.top();
//                if(st.size() >= 1)
//                {
//                    if((ch == 'R' && s[i] == 'B') || (ch == 'B' && s[i]=='R'))
//                    {
//                        st.pop();
//                        if(st.size() >= 1 && st.top() == 'P')
//                            st.pop();
//                        else
//                            st.push('P');
//                    }
//                    else if((ch == 'R' && s[i]=='G') || (ch == 'G' && s[i]=='R'))
//                    {
//                        st.pop();
//                        if(st.size() >= 1 && st.top() == 'Y')
//                            st.pop();
//                        else
//                            st.push('Y');
//                    }
//                    else if((ch == 'B' && s[i]=='G') || (ch == 'G' && s[i]=='B'))
//                    {
//                        st.pop();
//                        if(st.size() >= 1 && st.top())
//                            st.pop();
//                        else
//                            st.push('C');
//                    }
//                    else
//                        st.push(s[i]);
//                }
//            }
//        }
//        string ss;
//        while(!st.empty())
//        {
//            ss.push_back(st.top());
//            st.top();
//        }
//        reverse(ss.begin(),ss.end());
//        cout<<ss<<"\n";
//    }
//
//    return 0;
//}
