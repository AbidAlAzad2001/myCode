/*
Author: Abid Al Azad
Dept: Computer Science & Engineering
Topic: Implementation of Stack using Static Array
Islamic University, Bangladesh
*/
#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 500;
class Stack{
public:
    int a[MAX_SIZE];
    int stack_size;
    Stack()
    {
        stack_size = 0;
    }

    void push(int value)
    {
        if(stack_size > MAX_SIZE)
        {
            cout<<"Stack is full!\n";
            return;
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
        a[stack_size] = 0;
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
    st.push(100);
    cout<<st.top()<<"\n";
    st.push(200);
    cout<<st.top()<<"\n";
    st.push(300);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";

    return 0;
}
