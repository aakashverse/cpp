#include<bits/stdc++.h>
using namespace std;
 //Max Heap--> Iterative Approach//
class MaxHeap
{
    public:
    int *arr;
    int size; //total elements in heap
    int total_size; //total size of array

    MaxHeap(int n)
    {
        arr=new int[n];
        size=0;
        total_size=n;
    }

  void insert(int value)
 {
    //if heap size is available or not
    if(size==total_size)
    {
        cout<<"Heap Overflow\n";
        return;
    }

    arr[size]=value;
    int index=size;
    size++;

    //compare it with its parent
    while(index>0&&arr[(index-1)/2]<arr[index])
    {
        swap(arr[index],arr[(index-1)/2]);
        index=(index-1)/2;
    };

    cout<<arr[index]<<" is inserted into the heap\n";
 }

  void print()
 {
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

    cout<<endl;
 }

};


int main()
{
    MaxHeap H1(5);
    H1.insert(4);
    H1.insert(14);
    H1.insert(11);
    H1.insert(9);
    H1.insert(19);
    H1.insert(10);
    H1.print();

}