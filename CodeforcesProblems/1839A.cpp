#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        // int min_ones = ceil(n / (double)k) ;
        // cout << min_ones << endl;
        // if(k==1)
        //     cout<<n<<endl;
        // else if(n == k)
        //     cout<<2<<endl;
        // else
        // {
        //     cout<<ceil(n/(double)k)<<endl;
        // }
        int Abid = n;
        for(int i=1;i<=n;i++)
        {
            int l = (i + k - 2) / k;
            int r = (n - i + k -1) / k;
            Abid = min(Abid, l+ r);
        }
        cout<<Abid + 1<<endl;
    }

    return 0;
}