#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int std_id;
    string fathers_name;
    string mothers_name;

    Student()
    {

    }
    Student(string name, int ag, int id, string f_name,string m_name)
    {
        this->name = name;
        age = ag;
        std_id = id;
        fathers_name = f_name;
        mothers_name = m_name;
    }

    Student(string s,int ag, int id)
    {
        name = s;
        age = ag;
        std_id = id;
    }

    void print()
    {
//        cout<<"Name = "<<name<<"\n";
//        cout<<"Age = "<<age<<"\n";
//        cout<<"Student Id = "<<std_id<<"\n";
//        cout<<"Father Name = "<<fathers_name<<"\n";
//        cout<<"Mother Name = "<<mothers_name<<"\n";
        cout<<name<<" "<<age<<" "<<std_id<<endl;
    }

//    ~Student()
//    {
//        cout<<"called ";
//        print();
//    }
};

class person
{
public:
    string name;
    person *father, *mother;

    person()
    {
        father = NULL;
        mother = NULL;
    }
    person(string name, string f_name, string m_name)
    {
        this->name = name;
        father = new person;
        father->name = f_name;
        mother = new person;
        mother->name = m_name;
    }

    void print_info()
    {
        cout<<"Name = "<<name<<"\n";
        cout<<"Fathers name = "<<father->name<<"\n";
        cout<<"Mothers name = "<<mother->name<<"\n";
    }

    ~person()
    {
        cout<<"Called\n";
        if(father!=NULL)
            delete father;
        if(mother!=NULL)
            delete mother;
    }
};

int main()
{
//    Student s("A",10,20,"B","C");
//    s.print();
//
//    Student s2("A",30, 40);
//    s2.print();
//
//    Student s3;

//    person p("A","B","C");
//    p.print_info();

//    Student s[10];
//    for(int i=0;i<10;i++)
//        s[i] = Student("A",i,20);
//    for(int i=0;i<10;i++)
//        s[i].print();

    vector<Student>a;
    for(int i=0;i<10;i++)
    {
        a.push_back(Student("A",20-i,20));
    }
    for(int i=0;i<10;i++)
        a[i].print();

    return 0;
}
