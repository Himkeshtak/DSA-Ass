# include <stdio.h>

int permut_gen(int n , int startused , int endused ,int pos, char seq[])
{   
    //int N = 2*n;
    //static int pos = 0;
  
    // condition for the recursion
    if(startused == n && endused == n)
    {   seq[pos]= '\0';
        printf("%s\n", seq);
        return 0;
    }
    if(startused<n)
    {
        seq[pos] = 'S';
        permut_gen(n, startused+1,endused,pos+1, seq);
        //pos++;
    }
    if(endused<startused)
    {
        seq[pos] = 'E';
        permut_gen(n, startused, endused+1,pos+1, seq);
        //pos++;
    }
    return 0;
}


int main()
{
    int n;
    char seq[20];
    scanf("%d", &n);
    permut_gen(n , 0 , 0, 0 , seq);
    return 0;
}