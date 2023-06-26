#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int>mp;
    mp['A'] = 0;
    mp['B'] = 3;
    mp['C'] = 4;
    mp['D'] = 8;
    mp['E'] = 9;
    mp['F'] = 14;
    mp['G'] = 23;

    char n,m;
    cin>>n>>m;

    cout<<abs(mp[n]-mp[m])<<endl;


    return 0;
}

// #include <>

// int main() {
//     std::map<char, int> distances = {
//         {'A', 0},
//         {'B', 3},
//         {'C', 4},
//         {'D', 8},
//         {'E', 9},
//         {'F', 14},
//         {'G', 23}
//     };

//     char p, q;
//     std::cin >> p >> q;

//     int distance = std::abs(distances[p] - distances[q]);
//     std::cout << distance << std::endl;

//     return 0;
// }
