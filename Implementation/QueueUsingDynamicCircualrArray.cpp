#include<bits/stdc++.h>
using namespace std;

//Queue using Circular array
class Queue
{
public:
    int *a;
    int array_cap;
    int l,r;
    int sz;

    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
        a = new int[1];
        array_cap = 1;
    }

    void remove_circular()
    {
        if(l>r)
        {
            int *temp = new int[array_cap];
            int idx = 0;
            for(int i=l;i<array_cap;i++)
            {
                temp[idx] = a[i];
                idx++;
            }
            for(int i=0;i<=r;i++)
            {
                temp[idx] = a[i];
                idx++;
            }
            swap(temp,a);
            l = 0;
            r = array_cap - 1;
            delete []temp;
        }
    }
    void increase_size()
    {
        remove_circular();
        //size increase
        int *temp = new int[array_cap*2];
        for(int i=0;i<array_cap;i++)
        {
            temp[i] = a[i];
        }
        swap(a,temp);
        array_cap = array_cap*2;
        delete []temp;
    }

    //O(1)
    void enqueue(int value)
    {
        if(sz == array_cap)
        {
            increase_size();
        }
        r++;
        if(r == array_cap)
        {
            r = 0;
        }
        a[r] = value;
        sz++;
    }

    //O(1)
    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty\n";
            return;
        }
        l++;
        if(l == array_cap)
        {
            l = 0;
        }
        sz--;
    }

    //O(1)
    int front()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];
    }

    //O(1)
    int Size()
    {
        return sz;
    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(9);

    cout<<"Q size: "<<q.Size()<<"\n";
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<"Q size: "<<q.Size()<<"\n";

    return 0;
}


