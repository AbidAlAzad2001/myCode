#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void display(string* s)
{
    for (auto& i : *s)
        cout << i;
    cout << endl;
}
void test1()
{
    cout << "Test1-" << endl;
    string s{ "Mazharul" };
    display(&s);

    cout << endl << endl;
}

void test2()
{
    cout << "Test2-" << endl;
    string s1{ "Mazharul Islam" };
    string s2(s1);
    display(&s2);
    cout << endl << endl;
}

void test3()
{
    cout << "Test3-" << endl;
    string s(5, '#');

    display(&s);
    cout << endl << endl;
}

void test4()
{
    //String slicing
    cout << "Test4-" << endl;
    string s1{ "Mazharul Islam" };
    string s2(s1, 6, 6);

    /*
    syntax(string,kon index theke nibe,koita character nibe)
    */
    display(&s2);
    cout << endl << endl;
}

void test5()
{
    cout << "Test5-" << endl;
    string s1{ "Mazharul Islam" };
    string s2(s1.begin(), s1.begin() + 5);

    display(&s2);
    cout << endl << endl;
}

void test6()
{
    cout << "Test6-" << endl;
    string s1{ "Mazharul" };
    string s2{ "Islam" };
    s1 = s2;

    display(&s1);
    cout << endl << endl;
}

void test7()
{
    cout << "Test7-" << endl;
    string s1{ "Mazharul" };
    s1.clear();
    display(&s1);
    cout << endl << endl;
}

void test8()
{
    cout << "Test8-" << endl;
    string s{ "Mazharul Islam" };

    cout << s.length() << endl;
    cout << s.size() << endl;

    cout << endl << endl;
}

void test9()
{
    cout << "Test9-" << endl;
    string s{ "Mazharul Islam" };

    cout << s[3] << endl;
    cout << s.at(6) << endl;
    cout << endl << endl;
}

void test10()
{
    cout << "Test10-" << endl;
    string s{ "Mazharul" };

    cout << s.front() << endl;
    cout << s.back() << endl;
    cout << endl << endl;
}

void test11()
{
    cout << "Test11-" << endl;
    string s{ "Mazharul Islam " };
    s.append("Rifat");

    display(&s);
    cout << endl << endl;
}

void test12()
{
    cout << "Test12-" << endl;
    string s1{ "Mazharul Islam Rifat" };
    string s2{ " Mazhrul" };

    s1.append(s2, 0, 6);

    display(&s1);

    cout << endl << endl;
}

void test13()
{
    /*
    >>find returns index where pattern is found.
    >>If pattern is not there it returns predefined constant npos whose value is -1
    */

    cout << "Test13-" << endl;

    string s1{ "Mazharul" }, s2{ "kkMazharul" };

    if (s2.find(s1) != string::npos)
        cout << "s1 found in s2 at " << s2.find(s1)
        << " pos" << endl;
    else
        cout << "s1 not found in s2" << endl;

    cout << endl << endl;
}

void test14()
{
    cout << "Test14-" << endl;
    string s1{ "Mazharul Islam Rifat" };
    string s2{ "internationalization" };

    // Ncher liner er mane hocche 2 no index theke suru korbe and oikhan theke 3 ta character nibe
    cout << s1.substr(2, 3) << endl;

    // aitao previous explanation er mtw kaj korbe
    cout << s2.substr(1, s2.length() - 2) << endl;

    cout << endl << endl;
}

void test15()
{
    cout << "Test15-" << endl;
    string s1{ "Mazharul" };
    string s2{ "Rifat" };

    s1.clear();
    s2.erase();

    display(&s1);
    display(&s2);
    cout << endl << endl;
}

void test16()
{
    cout << "Test16-" << endl;
    string s1{ "Example of replace" };
    string s2{ "Demonstration" };
    string s3{ "GeeksforGeeks" };
    string s4{ "HeyWorld" };

    //Replace 7th character from 0th index by s2
    s1.replace(0, 7, s2);
    cout << s1 << endl;

    //Replace 3 characters from 0th index with "Hello"
    s4.replace(0, 3, "Hello");
    cout << s4 << endl;

    //Replace 5 characters from 6th index of s4 with 6 characters from 0th index of s3
    s4.replace(6, 5, s3, 0, 5);
    cout << s4 << endl;

    //Replace 5 characters form 6th index of s4 with 6 characters from string "to all"
    s4.replace(6, 5, "to all", 6);
    cout << s4 << endl;

    //Replace 1 character from 12th index of s4 with 3 copies of '!'
    s4.replace(12, 1, 3, '!');
    cout << s4 << endl;

    cout << endl << endl;
}
void test17()
{
    cout << "Test17-" << endl;
    /*
    string s1="Mazharul Islam Rifat";
    string s2 (s1.rbegin(),s1.rend());
    */
    string s1 = "Mazharul Islam Rifat", s2;
    s2 = string(s1.rbegin(), s1.rend());
    display(&s2);
    cout << endl << endl;
}

void test18()
{
    cout << "Test18-" << endl;
    string s1 = "ZZZAA";
    string s2 = "ZZZQA";
    /*Nicher line er mane hochhe s1[2] index ee jei char ta ase oita 1 bar
    nibe+ s1[4] ee jei char ta ase oita 1 bar nibe*/
    string ans1 = string(1, s1[2]) + string(1, s1[4]);
    /*Nicher line er mane hochhe s1[2] index ee jei char ta ase oita 2 bar
    nibe+ s1[4] ee jei char ta ase oita 3 bar nibe*/
    string ans2 = string(2, s1[2]) + string(3, s1[4]);
    /*Nicher line er mane hochhe s2[3] index ee jei char ta ase oita 1 bar
    nibe+ s2[4] ee jei char ta ase oita 1 bar nibe*/
    string ans3 = string(1, s2[3]) + string(1, s2[4]);
    /*Nicher line er mane hochhe s2[3] index ee jei char ta ase oita 2 bar
    nibe+ s2[4] ee jei char ta ase oita 3 bar nibe*/
    string ans4 = string(2, s2[3]) + string(3, s2[4]);
    cout << ans1 << endl;
    cout << ans2 << endl;
    cout << ans3 << endl;
    cout << ans4 << endl;
    cout << endl << endl;
}
int main()
{
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    // test6();
    // test7();
    // test8();
    // test9();
    // test10();
    // test11();
    // test12();
    // test13();
    // test14();
    // test15();
    test16();
    // test17();
    // test18();
    return 0;
}
