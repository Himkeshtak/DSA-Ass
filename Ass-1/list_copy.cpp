# include <iostream>
using namespace std;

#define MAX_SIZE 1000 

void copy_array(int *arr, int n )
{   
    int m = 2*n, j=0;
    int new_arr[MAX_SIZE];
    for(int i=0; i<m; i++)
    {
        if(i==n)
        {
            j=0;
        }

        new_arr[i] = arr[j];
        cout<<new_arr[i]<<" ";
        j++;

    }
}

int main ()
{
    int n=0 ;
    cout<<"Total numbers in your list";
    cin>>n;
    int arr[MAX_SIZE];
    cout<<"Type the number in your list ";
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        cout<<" ";
    }

    copy_array(arr, n);

    return 0;
}
//if you try to assign the the variable in the array while initiating it you will face error
//better give it the constatn of max size contraint in question

// to give the reference of the arry in the the function call write only 'arr' not '&arr' or 'arr[]'
// while defining the another function, use 'int *arr' instead of 'int arr[]'