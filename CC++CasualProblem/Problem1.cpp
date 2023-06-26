//#include<bits/stdc++.h>
//using namespace std;
//
//class node{
//public:
//    int data;
//    node* nxt;
//};
//
//class LinkedList{
//public:
//    node* head;
//    int sz;
//    LinkedList()
//    {
//        head = NULL;
//        sz = 0;
//    }
//
//    node* CreateNewNode(int value)
//    {
//        node* newnode = new node;
//        newnode->data = value;
//        newnode->nxt = NULL;
//        return newnode;
//    }
//
//    void InsertAtHead(int value)
//    {
//        sz++;
//        node* a = CreateNewNode(value);
//        if(head == NULL)
//        {
//            head = a;
//            return;
//        }
//        a->nxt = head;
//        head = a;
//    }
//
//    void Traverse()
//    {
//        node* a = head;
//        while(a != NULL)
//        {
//            cout<<a->data<<" ";
//            a = a->nxt;
//        }
//        cout<<"\n";
//    }
//
//    int SearchDistinctValue(int value)
//    {
//        node* a = head;
//        int index = 0;
//        while(a != NULL)
//        {
//            if(a->data == value)
//            {
//                return index;
//            }
//            a = a->nxt;
//            index++:
//        }
//        return -1;
//    }
//
//    void SearchAllValue(int value)
//    {
//        node* a = head;
//        int index = 0;
//        while(a != NULL)
//        {
//            if(a->data == value)
//            {
//                cout<<value<<" is found at index "<<index<<"\n";
//            }
//            a = a->nxt;
//            index++;
//        }
//    }
//
//    int getSize()
//    {
//        return sz;
//    }
//
//    void InsertAtAnyIndex(int index, int value)
//    {
//        if(index < 0 || index > sz)
//        {
//            return;
//        }
//        if(index == 0)
//        {
//            InsertAtHead(value);
//            return;
//        }
//        sz++;
//        node* a = head;
//        int cur_index = 0;
//        while(cur_index != index-1)
//        {
//            a = a->nxt;
//            cur_index++;
//        }
//        node* newnode = CreateNewNode(value);
//        newnode->nxt = a->nxt;
//        a->nxt = newnode;
//    }
//
//    void DeleteAtHead()
//    {
//        if(head == NULL)
//            return;
//        node* a = head;
//        head = a->nxt;
//        delete a;
//    }
//
//    void DeleteAtAnyIndex(int index)
//    {
//        if(index < 0 || index > sz-1)
//            return;
//        if(index == 0)
//        {
//            DeleteAtHead();
//            return;
//        }
//    }
//};
//
//int main()
//{
//
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//class node
//{
//public:
//    int value;
//    node* Left;
//    node* Right;
//};
//
//class BST
//{
//public:
//    node *root;
//    BST()
//    {
//        root = NULL;
//    }
//    node* CreateNewNode(int value)
//    {
//        node* NewNode = new node;
//        NewNode->value = value;
//        NewNode->Left = NULL;
//        NewNode->Right = NULL;
//        return NewNode;
//    }
//    void Insert(int value)
//    {
//        node* a = CreateNewNode(value);
//        if(root==NULL)
//        {
//            root = a;
//            return;
//        }
//        node* cur = root;
//        node* pre = NULL;
//        while(cur!=NULL)
//        {
//            if(a->value > cur->value)
//            {
//                pre = cur;
//                cur = cur->Right;
//            }
//            else
//            {
//                pre = cur;
//                cur = cur->Left;
//            }
//        }
//        if(a->value > pre->value)
//        {
//            pre->Right = a;
//        }
//        else
//        {
//            pre->Left = a;
//        }
//    }
//    bool Search(int value)
//    {
//        if(root==NULL)
//        {
//            return false;
//        }
//        node* cur = root;
//        while(cur!=NULL)
//        {
//            if(cur->value < value)
//            {
//                cur = cur->Right;
//            }
//            else if(cur->value > value)
//            {
//                cur = cur->Left;
//            }
//            else
//            {
//                return true;
//            }
//        }
//        return false;
//    }
//};
//int main()
//{
//    BST bst;
//    bst.Insert(10);
//    bst.Insert(20);
//    bst.Insert(25);
//    bst.Insert(50);
//    bst.Insert(8);
//    bst.Insert(9);
//    cout<<bst.Search(10)<<"\n"; //1
//    cout<<bst.Search(9)<<"\n"; //1
//    cout<<bst.Search(20)<<"\n"; //1
//    cout<<bst.Search(60)<<"\n"; //0
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;


class node{
public:
    int value;
    node* Left;
    node* Right;
};

class BST{
public:
    node *root;

    BST()
    {
        root = NULL;
    }

    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->value = value;
        newnode->Left = NULL;
        newnode->Right = NULL;
        return newnode;
    }


    void BFS()
    {
        if(root == NULL)
            return;
        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();
            q.pop();
            int p = -1, l = -1 , r= - 1;
            if(a->Left != NULL){
                l = a->Left->value;
                q.push(a->Left);
            }
            if(a->Right != NULL){
                r = a->Right->value;
                q.push(a->Right);
            }
            cout<<"Node value = "<<a->value<<" Left Child = "<<l;
            cout<<" Right Child = "<<r<<"\n";
        }
    }


    void Insert(int value)
    {
        node* newnode = CreateNewNode(value);

        if(root == NULL)
        {
            root = newnode;
            return;
        }

        node* cur= root;
        node* prv= NULL;
        while(cur != NULL)
        {
            if(newnode->value > cur->value)
            {
                prv = cur;
                cur = cur->Right;
            }
            else{
                prv = cur;
                cur = cur->Left;
            }
        }
        if(newnode->value > prv->value)
        {
            prv->Right = newnode;
        }
        else{
            prv->Left = newnode;
        }

    }

    bool Search(int value)
    {
        node* cur = root;
        while(cur != NULL)
        {
            if(value > cur->value)
            {
                cur = cur->Right;
            }
            else if(value < cur->value)
            {
                cur = cur->Left;
            }
            else{
                return true;
            }
        }
        return false;
    }

};


int main()
{
    BST bst;
    bst.Insert(10);
    bst.Insert(20);
    bst.Insert(25);
    bst.Insert(50);
    bst.Insert(8);
    bst.Insert(9);
    cout<<bst.Search(10)<<"\n";
    cout<<bst.Search(9)<<"\n";
    cout<<bst.Search(20)<<"\n";
    cout<<bst.Search(60)<<"\n";
    return 0;
}
