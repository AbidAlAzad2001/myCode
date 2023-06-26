#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node* Left;
    node* Right;
};

class BinarySearchTree{
public:
    node* root;

    BinarySearchTree()
    {
        root = NULL;
    }

    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode->value = value;
        newnode->Left = NULL;
        newnode->Right = NULL;
        return newnode;
    }

    void BFS()
    {
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            node* a = q.front();
            q.pop();
            int p = -1, l = -1, r = -1;
            if(a->Left != NULL)
            {
                l = a->Left->value;
                q.push(a->Left);
            }
            if(a->Right != NULL)
            {
                r = a->Right->value;
                q.push(a->Right);
            }
            cout<<"Node id = "<<a->value<<" Left Child = "<<l;
            cout<<" Right Child = "<<r<<" Prent id  = "<<p<<"\n";
        }
    }

    void Insertion(int value)
    {
        node* newnode = CreateNewNode(value);

        if(root == NULL)
        {
            root == newnode;
            return;
        }

        node* cur = root;
        node* prv = NULL;
        while(cur!=NULL)
        {
            if(newnode->value > cur->value)
            {
                prv = cur;
                cur = cur->Right;
            }
            else
            {
                prv = cur;
                cur = cur->Left;
            }
        }
        if(newnode->value > prv->value)
        {
            prv->Right = newnode;
        }
        else
        {
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
            else
            {
                return true;
            }
        }
        return false;
    }

    void Delete(int value)
    {
        node* cur = root;
        node* prv = NULL;
        while(cur != NULL)
        {
            if(value > cur->value)
            {
                prv = cur;
                cur = cur->Right;
            }
            else if(value < cur->value)
            {
                prv = cur;
                cur = cur->Left;
            }
            else{
                break;
            }
        }
        if(cur == NULL)
        {
            cout<<"Value is nit present in BST\n";
            return;
        }
        //case 1: both child is NULL
        if(cur->Left == NULL && cur->Right == NULL)
        {
            if(prv->Left->value == cur->value)
            {
                prv->Left = NULL;
            }
            else{
                prv->Right = NULL;
            }
            delete cur;
            return;
        }
    }
};

int main()
{
    BinarySearchTree bst;
    bst.Insertion(6);
    bst.Insertion(4);
    bst.Insertion(3);
    bst.Insertion(5);
    bst.Insertion(7);
    bst.Insertion(8);

    bst.BFS();

    return 0;
}
