# include <iostream>
using namespace std;
#define maxsize 1000

int binary_search(int start, int end, int *arr)
{   
    int ans =-1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;

        if(arr[mid]<mid)
        {
            start = mid+1;
        }
        else if(arr[mid]>mid)
        {
             end = mid-1;
        }
        else
        {
            ans = mid;
            end = mid-1;
        }   
    }

    return ans;
    //binary_search(start, end, arr );
}

int main()
{
    int n;
    int arr[maxsize];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   // int target;
    int ans =binary_search(0, n-1, arr);
    cout<<ans;
    return 0;
}