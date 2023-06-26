/*
Author: Abid AL Azad
Dept: Computer Science & Engineering
Topic: Stack Implementation using Dynamic Array
Islamic University, Bangladesh
*/
#include<bits/stdc++.h>
using namespace std;

//Template Based stack using Dynamic Array
template<class T>
class Stack{
public:
    T *a;
    int Stack_size;
    int array_cap;

    Stack()
    {
        a = new T[1];
        array_cap = 1;
        Stack_size = 0;
    }

    //Makes the array cap multiplied by 2
    void increase_size()
    {
        T* temp = new T[array_cap*2];
        for(int i=0;i<array_cap;i++)
        {
            temp[i] = a[i];
        }
        swap(a,temp);
        delete []temp;
        array_cap = array_cap*2;
    }

    //Add An Element in The Stack O(1)
    void push(T val)
    {
        if(Stack_size+1 > array_cap)
        {
            increase_size();
        }
        Stack_size++;
        a[Stack_size-1] = val;
    }

    //Delete the top most element from the stack O(1)
    void pop()
    {
        if(Stack_size == 0)
        {
            cout<<"Stack is empty!\n";
            return;
        }
        Stack_size--;
    }

    //Return the top element of the Stack O(1)
    T top()
    {
        if(Stack_size == 0)
        {
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return a[Stack_size - 1];
    }
};

int main()
{
    Stack<double> st;
    st.push(3.5);
    st.push(3.8);
    st.push(7.8);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";

    Stack<char>st2;
    st2.push('a');
    st2.push('g');
    st2.push('u');
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";
    return 0;
}


