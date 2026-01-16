# include <stdio.h>
# include <stdlib.h>

int zeros(int i, int *arr, int total)
{   
    if(i<0) return total;
    if(arr[i]==0)
    {
        total++;
    }
    zeros(i-1,arr,total);
}

int main()
{
    int n,i=0,j=0,a, arr[10];
    scanf("%d",&n);
    if (n<1 || n>1000000)
    {
        printf("invalid input");
        return -1;
    }

    a=n;
    while(i<20)
    {      
        arr[i] = a%10;
        a= a/10;

        if(a<1)
        {
            break;
        }
        i++;
    }
    int ans = zeros(i-1, arr,0 );
    printf("%d", ans);
    return 0;
}