# include <iostream>
# include <vector>
# include <climits>

using namespace std;

template <typename T>

class maxheap{

    private:
        vector<T> array;
        int size;
        int capacity;
    public:

        heapify(int i)
        {
            int i = largest;
            int left = 2*i + 1;
            int right  = 2*i + 2;

            if(left < size && array[left] > array[largest] )
            {
                largest = left;
            }
            if(right < size && array[right] > array[largest])
            {
                largest = right;
            }

            if(largest != i)
            {
                swap(array[i] , array[largest]);
                heapify(largest)
            }
        }

        //  my alternate implementation of heapify, simple to understand

        heapify(int i)
        {
            int i = largest;
            int left = 2*i + 1;
            int right  = 2*i + 2;

            if(left < size && array[left] > array[largest] )
            {
                swap(array[i] , array[left]);
                heapify(largest);
            }
            if(right < size && array[right] > array[largest])
            {
                swap(array[i] , array[right]);
                heapify(largest);
            }
        }
};

int main()
{
    
}