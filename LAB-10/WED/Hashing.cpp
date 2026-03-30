#include <iostream>
#define MAX_SIZE 10
using namespace std;

int hashing(int input[], int n , int key)
{   
    int hashtable[MAX_SIZE];

    // initialize
    for(int i=0 ; i<MAX_SIZE;i++)
    {
        hashtable[i] = -1; 
    }

    // insert using linear probing
    for (int i=0 ; i<n;i++)
    {
        int index = input[i] % MAX_SIZE;

        for(int j=0;j<MAX_SIZE;j++)
        {
            if(hashtable[index] == -1)
            {
                hashtable[index] = input[i];
                break;
            }
            else
            {
                index = (index + 1) % MAX_SIZE;
            }
        }
    }

    // search
    int ind = key % MAX_SIZE;

    for(int i=0;i<MAX_SIZE;i++)
    {
        if(hashtable[ind] == key)
        {
            return ind;
        }
        else
        {
            ind = (ind + 1) % MAX_SIZE;
        }
    }

    return -1;
}

int main()
{
    int n,key;
    cin>>n;

    int array_input[100];

    for(int i=0; i<n ;i++)
    {
        cin>>array_input[i];
    }

    cin>>key;

    int indice_out = hashing(array_input,n,key);

    cout<< indice_out;

    return 0;
}