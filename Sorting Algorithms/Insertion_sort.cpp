#include <iostream>
#include <algorithm>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i<n ;i++)
    {
        int key = arr[i];
        int j = i -1 ;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];  //Right shift karna element ko 
            j--;
        }
        arr[j+1]=key;
    }
}

int main()
{
    int arr[] = {8, 3, 5, 7, 6};
    int n = 5;
    insertion_sort(arr,n);
    for(int i=0; i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
