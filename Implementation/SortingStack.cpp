/*
Author: Abid Al Azad
Topic: Stack Sorting
Dept: Computer Science & Engineering
Islamic University, Bangladesh.
*/
#include<bits/stdc++.h>
using namespace std;

template<class T>
class node{
public:
    T data;
    node* nxt;
    node* prv;
};

template<class T>
class DoublyLinkedList{
public:
    node<T>* head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node<T>* CreateNewNode(T data)
    {
        node<T>* newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Insert a node with given data at head O(1)
    void InsertAtHead(T data)
    {
        node<T>* newnode = CreateNewNode(data);
        sz++;
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node<T>* a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        node<T>* a = head;
        node<T>* b = head->nxt;
        delete a;
        if(b!=NULL)
        {
            b->prv = NULL;
        }
        head = b;
        sz--;
    }
    void Traverse()
    {
        node<T>* a = head;
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    //O(1)
    int getSize()
    {
        return sz;
    }
};

//Stack using doubly linked list
template<class T>
class Stack{
public:
    DoublyLinkedList<T> dl;
    Stack()
    {

    }

    T top()
    {
        if(dl.getSize() == 0)
        {
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return dl.head->data;
    }

    void push(T value)
    {
        dl.InsertAtHead(value);
    }

    void pop()
    {
        if(dl.getSize() == 0)
        {
            cout<<"Stack is empty!";
            return;
        }
        dl.DeleteAtHead();
    }

    int getSize()
    {
        return dl.getSize();
    }
};

int main()
{
    Stack<int>st;
    st.push(5);
    st.push(2);
    st.push(7);
    st.push(8);
    st.push(3);

    Stack<int>temp;
    while(st.getSize()>0)
    {
        int t = st.top();
        st.pop();
        while(temp.getSize()>0)
        {
            if(temp.top()<t)
            {
                break;
            }
            st.push(temp.top());
            temp.top();
        }
        temp.push(t);
    }
    swap(st,temp);

    while(st.getSize()>0)
    {
        cout<<st.top()<<"\n";
        st.pop();
    }

    return 0;
}

