# include <stdio.h>
# include <stdlib.h>

# define size 10

int top=-1, stack_arr[size];

int push(int x)
{
    if(top == size-1)
    {
        printf("The stack is full (Stack overflow)\n");
        return -1;
    }
    else
    {
        stack_arr[++top]= x;
        //top++;
       // return top;
    }
    return 0;
}

int pop()
{
    if(top == -1)
    {
        printf("The stack is empty\n");
        return -1;
    }
    else
    {   
        int popped_element = stack_arr[top];
        top--;     
        return popped_element;  
    }
}
void display()
{   
    int temp =top;
    while(top>=0)
    {
        printf("%d\n",stack_arr[top]);
        top--;
    }

    top = temp;

}

int main()
{
    push(7);
    push(8);
    push(10);
    pop();
    display();
    printf("%d\n",top);
    return 0;
}
