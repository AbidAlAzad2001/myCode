/*
Topic: Implementation of Sieve of Eratosthenes
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int >primes;
    vector<bool>visited(n+1);
    for(int i=2;i<=n;i++)
    {
        if(visited[i] == false)
        {
            primes.push_back(i);
            for(int x=2;i*x<=n;x++)
            {
                visited[x*i]=true;
            }
        }
    }
    cout<<primes.size()<<"\n";
    for(int i=0;i<primes.size();i++)
        cout<<primes[i]<<" ";

    return 0;
}


/*
Memory Complexity -> O(n)
Time Complexity -> n log(n)
*/
