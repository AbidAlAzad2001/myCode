#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
public:
    vector<int>nodes;

    Heap()
    {

    }

    void up_heapify(int  idx)
    {
        while(idx > 0 && nodes[idx] > nodes[(idx-1)/2])
        {
            swap(nodes[idx],nodes[(idx-1)/2]);
            idx = (idx-1)/2;
        }
    }

    void insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size()-1);
    }

    void PrintHeap()
    {
        for(int i=0;i<nodes.size();i++)
        {
            cout<<nodes[i]<<" ";
        }
        cout<<"\n";
    }

    void down_heapify(int idx)
    {
        while(1)
        {
            int largest = idx;
            int l = 2*idx + 1;
            int r = 2*idx + 2;
            if(l<nodes.size() && nodes[largest] < nodes[l])
            {
                largest = l;
            }
            if(r<nodes.size() && nodes[largest] < nodes[r])
            {
                largest = r;
            }
            if(largest == idx)
                break;
            swap(nodes[idx],nodes[largest]);
            idx = largest;
        }
    }

    void Delete(int idx)
    {
        if(idx > nodes.size())
            return;
        swap(nodes[idx],nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    int GetMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty!\n";
            return -1;
        }
        return nodes[0];
    }

    int ExtractMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty!\n";
            return -1;
        }
        int ret = nodes[0];
        Delete(0);
        return ret;
    }

    void build_ftom_array(vector<int>&a)
    {
        nodes = a;
        int n = nodes.size();
        int last_non_leaf = (n/2) - 1;
        for(int i=last_non_leaf;i>=0;i--)
        {
            down_heapify(i);
        }
    }

    int Size()
    {
        return h.size();
    }
};

class PriorityQueue{
public:
    MazHeap h;
    PriorityQueue()
    {

    }

    void push(int x)
    {
        h.insert(x);
    }
    void pop()
    {
        h.Delete(0);
    }

    void top()
    {
        return h.GetMax();
    }

    int size()
    {
        h.Size();
    }
};

int main()
{
    PriorityQueue pq;
    pq.push(5);
    pq.push(7);
    pq.push(10);
    pq.push(1);
    pq.push(2);


    return 0;
}

