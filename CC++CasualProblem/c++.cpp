#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>::iterator it;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<a.size()<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    // a.clear();
    // cout<<a.size()<<endl;
    a.insert(a.begin()+2,10);
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
        cout<<endl;
    cout<<a.size()<<endl;
    it = a.begin();
    a.erase(it+2);
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
        cout<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for(int i=0;i<n;i++)
//         cin>>a[i];
//     for(auto it: a)
//         cout<<it<<" ";

//     return 0;
// }