# include <iostream>

using namespace std;
# define max_size 1000;

void avail_pairs(int n , int t, int *arr)
{
    for (int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {   
            if ((arr[i]+arr[j]) < t && arr[i]!=arr[j])
            {
                cout<<"("<<arr[i]<<","<<arr[j]<<")";
            }
        }
    }

}

int main()
{
    int n,t;
    int arr[1000];
    cout<<"Enter the number of the students: ";
    cin>>n;
    cout<<"Enter the number pasted on the students: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Threshold of the summation of numbers: ";
    cin>>t;
    if (t<0 || t>1000000)
    {
        cout<<"Invalid threshold";
        return -1;
    }

    avail_pairs(n ,t ,arr);
    return 0;

}