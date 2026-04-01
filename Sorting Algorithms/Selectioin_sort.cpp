#include <iostream>
#include <algorithm>
using namespace std;

int selection_sort(int *arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min_index = 0;

        for(int j = i+1 ; j < n ; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[i] , arr[min_index]);
    }
    return *arr;
}

int main()
{
    int n, arr[100];
    
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    selection_sort(arr , n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}