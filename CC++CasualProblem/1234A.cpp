// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,k;
//     cin>>n>>k;
//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     int i=0,j=0,mx=INT_MIN;
//     queue<int>q;
//     while(j<n)
//     {
//         mx=max(mx,arr[j]);
//         if(j<k-1)
//             j++;
//         else{
//             q.push(mx);
//             if(j<n-k)
//                 cout<<q.front()<<" ";
//             if(mx>arr[i])
//                 q.pop();
//             if(j==n-k)
//                 cout<<q.front()<<" ";
//             i++;
//             j++;
//         }
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string txt,pat;
    cin>>txt>>pat;
    int k=pat.size(),i=0,j=0;
    int fr1[26]={0};
    int fr2[26]={0};
    for(char c: pat)
        fr1[c-'a']++;
    int ans = 0;
    while(j<txt.size())
    {
        fr2[txt[j] - 'a']++;
        if(j<k-1)
            j++;
        else
        {
            bool flag = true;
            for(int v=0;v<26;v++)
            {
                if(fr1[v] != fr2[v])
                {
                    flag = false;
                    break;
                }
            }
            if(flag) 
            ans++;
            fr2[txt[i] - 'a']--;
            i++;
            j++;
        }
    }
    cout<<ans<<endl;

    return 0;
}


