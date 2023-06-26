/*
Author: Abid Al Azad
Dept: Computer Science & Engineering
Topic: Implementation of Doubly Linked List
Islamic University, Bangladesh
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
        sz = 0;
        head = NULL;
    }

    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    void InsertAtHead(int value)
    {
        node* newnode = CreateNewNode(value);
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

    void InsertAtAnyIndex(int index, int value)
    {
        if(index > sz)
            return;
        if(index == 0)
        {
            InsertAtHead(value);
            return;
        }
        node* a =head;
        int cur_index = 0;
        while(cur_index != index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node* newnode = CreateNewNode(value);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node* b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }

    void Delete(int index)
    {
        if(index >= sz)
        {
            cout<<index<<" does not exist\n";
            return;
        }
        node* a = head;
        int cur_index = 0;
        while(cur_index!=index)
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
            head = c;
        sz--;
    }

    void Traverse()
    {
        node* a = head;
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

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
        node* b = head;
        while(b!=NULL)
        {
            swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }

    int getSize()
    {
        return sz;
    }
};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(5);
    dl.InsertAtHead(1);
    dl.Traverse();
    dl.InsertAtAnyIndex(2,100);
    dl.Traverse();
    dl.Delete(2);
    dl.Traverse();

    return 0;
}
