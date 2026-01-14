# include <iostream>
using namespace std;

void triplet_pair(int n, int *arr)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            for(int k=0;k<j;k++);
            {
                if(arr[i]+arr[j]+arr[k] == 0 && arr[i])
                {
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
                }
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the number of the integers";
    cin>>n;
    if(n<3)
    {
        cout<<"Invalid numbers";
        return -1;
    }

    int arr[100];
    cout<<"Enter the integers here";

    for(int i=0;i<n;i++)
    { 
        cin>>arr[i];
    }
    triplet_pair(n ,arr);

    return 0;
}