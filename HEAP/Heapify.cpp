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

        my_heapify(int i)
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

        //funcition to build a heap from an array
        void buildheap( const vector<T>& arr)
        {   
            capacity = arr.size();
            size = capacity;
            array = arr;
            
            //build heap (rearrange the array)
            for(int i = size-1/2 ; i>= 0 ;i--)
            {
                heapify(i);
            }
        }

        //insert the new element in the heap
        void insert(T key)
        {
            if(size == capacity)
            {
                //resize the heap if necessary
                capacity *= 2; // capacity = 2 * capacity;
                array.resize(capacity);
            }
            size++;

            int i = size - 1;
            array[i] = key;

            while(i != 0 && array[(i-1)/2] < array[i])
            {
                swap(array[i], array[(i-1)/2]);
                i = (i-2)/2;
            }
        }

        //funciton ot get the root value of the heap
        T top()
        {
            if(size <= 0) // this means the heap is empty
            {
                cout<<"HEAP is empty"<<endl;
                return -1;
            }
            return array[0];
        }

        T pop_from_last()
        {
            if (size <= 0)
            {
                return -1;
            }
            if(size == 1)
            {
                size--;
                return array[0];
            }

            size--;
            int popped_element = array[size];
            return popped_element;
        }

        T max_pop()
        {
            if(size <= 0)
            {   
                cout<<"Heap is empty";
                return -1;
            }
            if(size == 1)
            {
                size--;
                return array[0];
            }

            T root = array[0]; //store the root element to return later
            array[0] = array[size-1]; // move 
            size--;

            heapify(0);
            return root;
        }
};

int main()
{
    vector<int> arr = {3, 2, 1, 4 ,5 ,6, 7, 8, 9, 10};

    return 0;
}