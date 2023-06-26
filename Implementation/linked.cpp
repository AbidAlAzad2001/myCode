/*
Author: Abid Al Azad
Topic: Implementation of Singly Linked List 
Dept: Computer Science & Engineering
Islamic University, Bangladesh.
*/
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* nxt;
};

class LinkedList{
    public:
    node* head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with data = value and nxt = NULL
    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }
    //Insert new value at head
    void InsertAtHead(int value)
    {
        sz++;
        node* a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        //If head is not NULL
        a->nxt = head;
        head = a;
    }

    //Prints the linked list
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

    //Search for a single value
    int SearchDistinctValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a != NULL)
        {
            if(a->data == value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }

    // Search all possible occurrence
    void SearchAllValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a != NULL)
        {
            if(a->data == value)
            {
                cout<<value<<" is found at index "<<index<<"\n";
            }
            a = a->nxt;
            index++;
        }
    }

    //Length of Linked List
    int getSize()
    {
        //O(1)
        return sz;

        //O(size of linked list) = O(n)
//        int sz = 0;
//        node* a = head;
//        while(a != NULL)
//        {
//            sz++;
//            a = a->nxt;
//        }
//        return sz;
    }

    void insertAtAnyIndex(int index, int value)
    {
        if(index < 0 || index > sz)
            return;
        if(index == 0)
        {
            InsertAtHead(value);
            return;
        }
        sz++;
        node* a = head;
        int cur_index = 0;
        while(cur_index != index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node* newnode  = CreateNewNode(value);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }

    void DeleteAtHead()
    {
        if(head == NULL)
            return;
        sz--;
        node* a = head;
        head  = a->nxt;
        delete a;
    }

    void DeleteAnyIndex(int index)
    {
        if(index < 0 || index > sz-1)
            return;
        if(index == 0)
        {
            DeleteAtHead();
            return;
        }
        sz--;
        node* a = head;
        int cur_index = 0;
        while(cur_index != index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node* b = a->nxt;
        a->nxt = b->nxt;
        delete b;
    }

    void InsetAfterValue(int value, int data)
    {
        node* a = head;
        while(a != NULL)
        {
            if(a->data == value)
            {
                break;
            }
            a = a->nxt;
        }
        if(a == NULL)
        {
            cout<<value<< " doesn't exist in Linked List.\n";
        }
        sz++;
        node* newnode = CreateNewNode(data);
        newnode -> nxt = a->nxt;
        a->nxt = newnode;
    }

    //Print the reverse order from node a to last
    void ReversePrint2(node *a)
    {
        if(a == NULL)
            return;
        ReversePrint2(a->nxt);
        cout<<a->data<<" ";
    }
    void ReversePrint()
    {
        ReversePrint2(head);
        cout<<"\n";
    }
};

int main()
{
    LinkedList l;
    l.InsertAtHead(30);
    l.InsertAtHead(10);
    l.InsertAtHead(5);
    l.InsertAtHead(1);
    l.Taverse();

//    l.ReversePrint();
//    l.Taverse();

    return 0;
}
