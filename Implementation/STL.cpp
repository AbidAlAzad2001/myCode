//Set(erase, insert, size, find)
//auto
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    set<int>st;
//
//    //Insert O(logn)
//    st.insert(5);
//    st.insert(3);
//    st.insert(4);
//    st.insert(7);
//    st.insert(3);
//    st.insert(4);
//
//    //Print O(n)
//    cout<<"Printing set\n";
//    for(auto i:st)
//        cout<<i<<" ";
//    cout<<"\n";
//
//    //Size O(1)
//    cout<<"Set Size : ";
//    cout<<st.size()<<"\n";
//
//    //Print O(n)
//    for(auto it = st.begin(); it != st.end();it++)
//        cout<<*it<<" ";
//    cout<<"\n";
//
//    //Erase O(logn)
//    st.erase(5);
//
//    for(auto it = st.begin(); it != st.end();it++)
//        cout<<*it<<" ";
//    cout<<"\n";
//
//    //Find O(logn)
//    if(st.find(7)!= st.end())
//        cout<<"7 found\n";
//    else
//        cout<<"7 not found\n";
//
//    if(st.find(5)!= st.end())
//        cout<<"5 found\n";
//    else
//        cout<<"5 not found\n";
//    return 0;
//}

//multiset(insert, size, erase)
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    multiset<int>a;
//
//    //Insert O(logn)
//    a.insert(5);
//    a.insert(7);
//    a.insert(4);
//    a.insert(3);
//    a.insert(4);
//    a.insert(7);
//
//    //Print O(n)
//    for(auto it: a)
//        cout<<it<<" ";
//    cout<<"\n";
//
//    //Size O(1)
//    cout<<a.size()<<"\n";
//
//    //erase O(logn)
//    //erase all occurance
//    a.erase(7);
//
//    for(auto it: a)
//        cout<<it<<" ";
//    cout<<"\n";
//
//    //erase a single occurance
//    a.erase(a.find(4));
//    for(auto it: a)
//        cout<<it<<" ";
//    cout<<"\n";
//
//    //Find O(logn)
//    if(a.find(5) != a.end())
//        cout<<"5 found\n";
//    else
//        cout<<"5 not found\n";
//    if(a.find(7) != a.end())
//        cout<<"7 found\n";
//    else
//        cout<<"7 not found\n";
//
//    return 0;
//}

//STL pair
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    pair<string, int>a;
//    a.first = "abcd";
//    a.second = 6;
//    cout<<"Pair a = "<<a.first<<" , "<<a.second<<"\n";
//
//    pair<int, int>b;
//    b.first = 100;
//    b.second = 200;
//    cout<<"Pair b = "<<b.first<<" , "<<b.second<<"\n";
//    return 0;
//}

//map
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int>mp;
    //insert O(logn)
    mp["Abid"] = 1;
    mp["Azad"] = 2;
    mp["Shakib"] = 3;

    //value of a key
    cout<<"Value of a key";
    cout<<mp["Abid"]<<"\n";
    cout<<mp["Shakib"]<<"\n";

    mp["Worshipper"] = 3;
    cout<<mp["Worshipper"]<<"\n";

    //Print the map O(n)
    for(auto it:mp){
        cout<<" Key : "<<it.first<<" , Value : "<<it.second<<"\n";
    }
    //size of map
    cout<<mp.size()<<"\n";
    return 0;
}
