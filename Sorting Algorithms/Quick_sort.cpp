#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int high, int low)
{
    int pivot = arr[high] ; //making the lasting element as a pivot
    int i = low - 1;

    for(int j=low; j < high; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1], arr[high]); //pivot ko correct jagah pe
    return i+1;
}

void quick_sort(int arr[], int low,  int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi-1); //left wala part
        quick_sort(arr, pi+1, high); //right wala part
    }
}