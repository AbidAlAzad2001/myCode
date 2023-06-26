/*
Author: Abid Al Azad
Dept: Computer Science & Engineering
Topic: Implementation of Stack using Dynamic Array
Islamic University, Bangladesh
*/
#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
    int* a;
    int stack_size;
    int array_cap;

    Stack()
    {
        a = new int[1];
        stack_size = 0;
        array_cap = 1;
    }

    void increase_size()
    {
        int* temp = new int[array_cap*2];
        for(int i=0;i<array_cap;i++)
            temp[i] = a[i];
        swap(temp, a);
        array_cap*=2;
    }

    void push(int value)
    {
        if(stack_size+1 > array_cap)
        {
            increase_size();
        }
        stack_size++;
        a[stack_size - 1] = value;
    }

    void pop()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty!\n";
            return;
        }
        a[stack_size - 1] = 0;
        stack_size--;
    }

    int top()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty!\n";
            return -1;
        }
        return a[stack_size - 1];
    }
};

int main()
{
    Stack st;
    st.push(10);
    cout<<st.top()<<"\n";
    st.push(20);
    cout<<st.top()<<"\n";
    st.push(30);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";

    return 0;
}
