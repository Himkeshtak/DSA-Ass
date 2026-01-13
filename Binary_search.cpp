# include<iostream>
using namespace std;


//Recursive Binary Search
/*int binarysearch_recur(int start,int end,int target, int arr[])
{
    if(start>end)
    {
        return -1;
    }

    int mid = start + (end - start)/2;
    
    if (arr[mid]==target)
    {
        return mid;
    }
    else if (arr[mid]>target)
    {
        return binarysearch(start,mid-1,target);
    }
    else
    {
        return binarysearch(mid+1,end,target);
    }

}
*/

//Iterative binary search
int binarysearch_iter(int start, int end, int target, int arr[])
{
    //int mid = start + (end - start)/2;
    while (start<=end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if (arr[mid]>target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid -1;
        }
    }
    return -1;
}
int main()
{
    int n;
    int arr[n], target;

    cout<<"Enter the number of the elements int he array";
    cin>>n;
    cout<<"Enter the elements in the ascending order ";
    
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    //getline(cin, arr[]);

    cout<<"Enter the target element to be searched";
    cin>>target;
    //int result = binarysearch_recur(0,n-1,target, arr);
    int result = binarysearch_iter(0,n-1,target, arr);

    if (result != -1)
    {
        cout<<"Element not found in the array";
    }
    else
    {
        cout<<"Element found at the index"<<result;
    }
    
    return 0;
}


