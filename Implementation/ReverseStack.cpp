/*
Author: Abid Al Azad
Topic: Reverse Stack
Dept: Computer Science & Engineering
Islamic University, Bangladesh.
*/
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* nxt;
    node* prv;
};

class DoublyLinkedList{
public:
    node* head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node* CreateNewNode(int data)
    {
        node* newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Insert a node with given data at head O(1)
    void InsertAtHead(int data)
    {
        node* newnode = CreateNewNode(data);
        sz++;
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node* a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    //Insert the given data at the given index O(n)
    void InsertAtAnyIndex(int index, int data)
    {
        if(index > sz)
            return;
        if(index == 0)
        {
            InsertAtHead(data);
            return;
        }
        node* a = head;
        int cur_index = 0;
        while(cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        //a = cur_index - 1
        node* newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node* b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }

    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        node* a = head;
        node* b = head->nxt;
        delete a;
        if(b!=NULL)
        {
            b->prv = NULL;
        }
        head = b;
        sz--;
    }

    //deletes given index O(n)
    void Delete(int index)
    {
        if(index >= sz)
        {
            cout<<index<<" doesn't exist\n";
            return;
        }
        node* a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node* b = a->prv;
        node* c = a->nxt;
        if(b!=NULL)
            b->nxt = c;
        if(c!=NULL)
            c->prv = b;
        delete a;
        if(index == 0)
        {
            head = c;
        }
        sz--;
    }

    //Reverse the doubly linked list O(n)
    void Reverse()
    {
        if(head == NULL)
            return;
        node* a = head;
        int cur_index = 0;
        while(cur_index != sz-1)
        {
            a = a->nxt;
            cur_index++;
        }
        //last index is in a

        node* b = head;
        while(b != NULL)
        {
            swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }

    //Prints the linked list O(n)
    void Taverse()
    {
        node* a = head;
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

class Stack{
public:
    DoublyLinkedList dl;
    Stack()
    {

    }

    int top()
    {
        if(dl.getSize() == 0)
        {
            cout<<"Stack is empty!\n";
            return -1;
        }
        return dl.head->data;
    }

    void push(int value)
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
    //Reverse a stack using another stack
    Stack<int>a;
    a.push(4);
    a.push(6);
    a.push(3);
    a.push(7);

    Stack<int>temp;
    while(a.getSize()>0)
    {
        temp.push(a.top());
        a.pop();
    }
    swap(a,temp);


    return 0;
}


