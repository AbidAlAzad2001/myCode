//#include<bits/stdc++.h>
//using namespace std;
//
//class MaxHeap{
//public:
//    vector<int>nodes;
//    MaxHeap()
//    {
//
//    }
//
//    //O(logn)
//    void up_heapify(int idx)
//    {
//        while(idx > 0 && nodes[idx] > nodes[(idx-1)/2])
//        {
//            swap(nodes[idx],nodes[(idx-1)/2]);
//            idx = (idx-1)/2;
//        }
//    }
//
//    //O(logn)
//    void insert(int x)
//    {
//        nodes.push_back(x);
//        up_heapify(nodes.size()-1);
//    }
//
//    //O(n)
//    void Print_Heap()
//    {
//        for(int i=0;i<nodes.size();i++)
//            cout<<nodes[i]<<" ";
//        cout<<"\n";
//    }
//
//    //O(logn)
//    void down_heapify(int idx)
//    {
//        while(1)
//        {
//            int largest = idx;
//            int l = 2*idx+1;
//            int r = 2*idx+2;
//            if(l < nodes.size() && nodes[largest] < nodes[l])
//            {
//                largest = l;
//            }
//            if(r < nodes.size() && nodes[largest] < nodes[r])
//            {
//                largest = r;
//            }
//            if(largest == idx)
//                break;
//            swap(nodes[idx],nodes[largest]);
//            idx = largest;
//        }
//    }
//
//    //O(logn)
//    void Delete(int idx)
//    {
//        if(idx >= nodes.size())
//            return;
//        swap(nodes[idx], nodes[nodes.size()-1]);
//        nodes.pop_back();
//        down_heapify(idx);
//    }
//
//    //O(1)
//    int getMax()
//    {
//        if(nodes.empty()){
//                cout<<"Heap is empty!\n";
//            return -1;
//        }
//        return nodes[0];
//    }
//
//    //O(logn)
//    int ExtractMax()
//    {
//        if(nodes.empty()){
//                cout<<"Heap is empty!\n";
//            return -1;
//        }
//        int ret = nodes[0];
//        Delete(0);
//        return ret;
//    }
//
//    void build_from_array(vector<int>&a)
//    {
//        nodes = a;
//        int n = nodes.size();
//        int last_non_leaf = n/2 -1;
//        for(int i=last_non_leaf;i>=0;i--)
//            down_heapify(i);
//    }
//};
//
//int main()
//{
//    MaxHeap h;
//    vector<int>a = {1,2,3,4,10,9,8,7};
//    h.build_from_array(a);
//    h.Print_Heap();
//    return 0;
//}

//class Node{
//	int value;
//	Node* nxt;
//	Node* prv;
//};
//
//class LinkedList{
//	Node* head;
//	Node* tail;
//	LinkedList()
//	{
//		head = NULL;
//	}
//	void insertHead(int value)
//	{
//		//Write your code
//	}
//	void insertTail(int value)
//	{
//		//Write your code
//	}
//	void insertMid(int value)
//	{
//		//Write your code
//	}
//	void print()
//	{
//		//Write your code
//	}
//	void Merge(LinkedList a)
//	{
//		//Merge a at the back of this linked-list
//		//Write your code
//	}
//};
//int main()
//{
//	LinkedList a;
//	LinkedList b;
//
//	a.insertHead(1);
//	a.insertTail(5);
//	a.insertMid(3);
//	a.insertHead(0);
//	a.insertTail(10);
//	a.print(); // prints  0 1 3 5 10
//
//	b.insertHead(10);
//	b.insertTail(50);
//	b.insertMid(30);
//	b.insertHead(9);
//	b.insertTail(100);
//	b.print(); // prints  9 10 30 50 100
//
//	a.Merge(b);
//	a.print(); // prints  0 1 3 5 10 9 10 30 50 100
//	b.print(); // prints  9 10 30 50 100
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//class node{
//public:
//    int data;
//    node* nxt;
//    node* prv;
//};
//
//class DoublyLinkedList{
//public:
//    node* head;
//    int sz;
//    DoublyLinkedList()
//    {
//        head = NULL;
//        sz = 0;
//    }
//    node* CreateNewNode(int data)
//    {
//        node* newnode = new node;
//        newnode->data = data;
//        newnode->nxt = NULL;
//        newnode->prv = NULL;
//        return newnode;
//    }
//    void insertHead(int data)
//    {
//        node* newnode = CreateNewNode(data);
//        sz++;
//        if(head == NULL)
//        {
//            head = newnode;
//            return;
//        }
//        node* a = head;
//        newnode->nxt = a;
//        a->prv = newnode;
//        head = newnode;
//    }
//    void insertTail(int data)
//    {
//        node* newnode = CreateNewNode(data);
//        if(head == NULL)
//        {
//            head = newnode;
//            return;
//        }
//        node* a = head;
//        while(a->nxt != NUll)
//        {
//            a = a->nxt;
//        }
//
//    }
//    void insertMid(int data)
//    {
//        node* newnode = CreateNewNode(data);
//        if(head == NULL)
//        {
//            newnode = head;
//            return;
//        }
//    }
//    void Taverse()
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
//    //O(1)
//    int getSize()
//    {
//        return sz;
//    }
//};
//
//int main()
//{
//    DoublyLinkedList dl;
//    dl.InsertAtHead(10);
//    dl.InsertAtHead(5);
//    dl.InsertAtHead(1);
//    dl.Taverse();
//    dl.InsertAtAnyIndex(2,100);
//    dl.Taverse();
//    dl.Reverse();
//    dl.Taverse();
//
//    return 0;
//}

//Sum of numbers using recursive function
//#include<bits/stdc++.h>
//using namespace std;
//
//int Sum(int n)
//{
//    if(n == 0)
//        return 0;
//    int prevSum = Sum(n-1);
//    return n + prevSum;
//}
//
//int main()
//{
//    int n;
//    cin>>n;
//    cout<<Sum(n);
//
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//int power(int n ,int p)
//{
//    if(p == 0)
//    {
//        return 1;
//    }
//    int prevPower = power(n ,p-1);
//    return n*prevPower;
//}
//
//int main()
//{
//    int n,p;
//    cin>>n>>p;
//    cout<<power(n,p);
//
//    return 0;
//}

// #include<bits/stdc++.h>
// using namespace std;

// class node{
// public:
//     int data;
//     node* nxt;
//     node* prv;
// };

// class DoublyLinkedList{
// public:
//     node* head;
//     int sz;
//     DoublyLinkedList()
//     {
//         sz = 0;
//         head = NULL;
//     }

//     node* CreateNewNode(int value)
//     {
//         node* newnode = new node;
//         newnode->data = value;
//         newnode->nxt = NULL;
//         newnode->prv = NULL;
//         return newnode;
//     }

//     void InsertAtHead(int value)
//     {
//         node* newnode = CreateNewNode(value);
//         sz++;
//         if(head == NULL)
//         {
//             head = newnode;
//             return;
//         }
//         node* a = head;
//         newnode->nxt = a;
//         a->prv = newnode;
//         head = newnode;
//     }

//     void InsertAtAnyIndex(int index, int value)
//     {
//         if(index > sz)
//             return;
//         if(index == 0)
//         {
//             InsertAtHead(value);
//             return;
//         }
//         node* a = head;
//         int cur_index = 0;
//         while(cur_index != index - 1)
//         {
//             a = a->nxt;
//             cur_index++;
//         }
//         node* newnode = CreateNewNode(value);
//         newnode->nxt = a->nxt;
//         newnode->prv = a;
//         node* b = a->nxt;
//         b->prv = newnode;
//         a->nxt = newnode;
//         sz++;
//     }

//     void Delete(int index)
//     {
//         if(index >= sz)
//         {
//             cout<<index<<" does not exist\n";
//             return;
//         }
//         node* a =head;
//         int cur_index = 0;
//         while(cur_index!=index)
//         {
//             a = a->nxt;
//             cur_index++;
//         }
//         node* b = a->prv;
//         node* c = a->nxt;
//         if(b!=NULL)
//             b->nxt = c;
//         if(c!=NULL)
//             c->prv = b;
//         delete a;
//         if(index == 0)
//             head = c;
//         sz--;
//     }

//     void Reverse()
//     {
//         if(head == NULL)
//             return;
//         node* a = head;
//         int cur_index = 0;
//         while(cur_index != sz-1)
//         {
//             a = a->nxt;
//             cur_index++;
//         }
//         node* b = head;
//         while(b!=NULL)
//         {
//             swap(b->nxt, b->prv);
//             b = b->prv;
//         }
//         head = a;
//     }

//     void Traverse()
//     {
//         node* a =head;
//         while(a!=NULL)
//         {
//             cout<<a->data<<" ";
//             a = a->nxt;
//         }
//         cout<<"\n";
//     }

//     int getSize()
//     {
//         return sz;
//     }
// };

// int main()
// {
//     DoublyLinkedList dl;
//     dl.InsertAtHead(10);
//     dl.InsertAtHead(5);
//     dl.InsertAtHead(1);
//     dl.Traverse();
//     dl.InsertAtAnyIndex(2,100);
//     dl.Traverse();
//     dl.Delete(2);
//     dl.Traverse();

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    

    return 0;
}