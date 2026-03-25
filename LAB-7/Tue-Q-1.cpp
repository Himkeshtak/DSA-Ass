#include <iostream>
#include <vector>

using namespace std;

vector<int> array;
int size;
int capacity;

void heapify(int i)
{
    int largest = i;
    int left  = 2*i + 1;
    int right = 2*i + 2;

    if (left < size && array[left]>array[largest])
    {
        largest = left;
    }
    if (right < size && array[right]>array[largest])
    {
        largest = right;
    }
    if(i != largest)
    {
        swap(array[i], array[largest]);
        heapify(i);
    }
}

void build_heap(vector<T> &arr)
{
    size = arr.size();
    capacity = size;
    array = arr;

    for( int i= size - 1/2;i>=0;i--)
    {
        heapify(i);
    }
}

void insert(int key)
{
    if(size == capacity)
    {
        capacity *= 2;
    }
    size++;

    int i = size-1;
    array[i] = key;

    while(i!=0 && array[(i-1)/2]>array[i])
    {
        swap(array[i], array[(i-1)/2]);
        i = (i-1)/2;
    }

}

void delete_node(int key)
{
    int index = -1;

    for(int i = 0 ; i<size;i++)
    {
        if(array[i] == key)
        {
            index = i;
            break;
        }
    }

    if(index == -1)
    {
        cout << "ID not found bad request";
        return;
    }

    if(index == size-1)
    {
        size--;
        return array[index];
    }

    array[index] = array[size-1];
    size--;
    heapify(index);
}

void print_all()
{
    for(int i=0;i<size ; i++)
    {
        cout<<array[i];
    }
}



int main()
{
    

}