# include <stdio.h>

int climbing_ways(int n, int k, int step_count)
{   
    int count = 0;
    if(step_count==n-k)
    {   
        return 1;
    }
    if(step_count> n-k)
    {
        return 0;
    }

    // Method 1: using a explicit variable to store the count


    count += climbing_ways(n, k, step_count+1);
    count += climbing_ways(n, k, step_count+2);
    return count;

    // Method 2: Using single statement and adding both the recursive call to the return statement
    // return climbing_ways(n, k, step_count+1) + climbing_ways(n , k, step_count+2);
}

int main()
{
    int n, k;
    scanf("%d", &n);
    if(n<1 || n>30)
    {
        printf("Invalid input");
        return 0;
    }
    scanf("%d", &k);
    if(k<1 || k>n)
    {
        printf("Invalid input");
        return 0;
    }
    int step_count=0;

    //climbing_ways(n,k, step_count);
    printf("%d", climbing_ways(n,k, step_count));
    return 0;
}


//Learning:
// 1. Whenever asked of problem in which permutation is involved use recursion.
// 2. In this type of problem the recursion call will be always like this.
// 3, take care that whatever you wanted to store is being store or not ,
// 4. Dont forget to print the output of the recursive function in the main function,
//    or in the function itself.