# include <stdio.h>
# include <stdlib.h>

# define size 10
int queue_arr[size],front=-1, rear = -1 ;

int enqueue(int x)
{
    if(rear == size-1)
    {
        printf("The queue is full\n");
        return -1;
    }
    
    else
    {
        queue_arr[++rear] = x; 
    }
}

int dequeue()
{
    if(rear == -1 && front == -1)
    {
        printf("The queue is empty");
        return -1;
    }
    else
    {
        int dequeue_element = queue_arr[front];
        front--;
    }
}

int display()
{   
    int temp = front;
    while(front<=rear)
    {
        printf("%d ",queue_arr[front]);
        front++;
    }
    front=temp;
}

int main()
{
    enqueue(10);
    enqueue(11);
    enqueue(112);
    enqueue(13);
    dequeue();
    display();
    printf("%d %d", front,rear);
    return 0;
}
