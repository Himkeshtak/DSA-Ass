# include <iostream>
# include <vector>

using namespace std;

//template<typename T>

class maxheap
{
    private:
        vector<int> array;
        int size;
        int capacity;

    public:

    void heapify(int i)
     {
        int largest = i;
        int left = 2*i + 1;
        int right = 2*i + 2;

        if( left<size && array[left]>array[largest])
        {
            largest = left;
        }

        if(right < size && array[right]>array[largest])
        {
            largest = right;
        }

        if(largest != i)
        {
            swap(array[i],array[largest]);
            heapify(i);
        }
     }

     void heapsort(vector<int>& arr)
     {
        int n = arr.size();
        //Build heap (rearrange the vector)
        for(int i = n/2 - 1;i>=0; i--)
        {
            heapify(i);
        }

        //one by one extract the elements
        for(int i = n-1 ; i>0 ;i--)
        {   
            //move current root to end
            swap(array[i], array[0]);
            
            //call the heapify func
            heapify(i);
        }
     }
};

int main()
{
    vector<int> arr = {3, 5, 7, 4, 2, 89, 4, 909, 1, 23};

    maxheap.heapsort(arr);




}