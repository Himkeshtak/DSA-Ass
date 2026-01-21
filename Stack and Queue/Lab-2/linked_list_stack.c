# include <stdio.h>
# include <stdlib.h>

struct node {
    int data;
    struct node *prev;
};

struct node *head = NULL;

int node_create(int data)
{   
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    if(!new_node)
    {
        printf("Memory allocation failed\n");
        return -1;
    }
    new_node->data = data;
    new_node->prev = head;
    head = new_node;
    return 0;
}

int push(int data)
{   
     struct node* new_node = (struct node*)malloc(sizeof(struct node));

    if(!new_node)
    {
        printf("Memory allocation failed\n");
        return -1;
    }
    new_node->data = data;
    new_node->prev = head;
    head = new_node;
    return 0;
    //node_create(data);
}

void pop()
{
    if(head==NULL)
    {
        printf("EMPTY\n");
        return;
    }
    head = head->prev;
}

void display()
{   
    if(head==NULL)
    {
        printf("EMPTY\n");
        return;
    }
    struct node *temp = head;
    while(head!=NULL)
    {
        printf("%d\n",head->data);
        head=head->prev;
    }
    head= temp;
}
void display_peak()
{   
    if(head!=NULL)
    {
        printf("%d\n",head->data);
    }
    else
    {
        printf("empty stack");
    }
}

int main()
{   
    int q_operation, input,data;

    scanf("%d",&q_operation);

    while(q_operation>0)
    {
        scanf("%d",&input);
        
        switch(input)
        {
            case 1:
            scanf("%d",&data);
            push(data);
            break;
    
            case 2:
            pop(); 
            break;
    
            case 3:
            display_peak();
            break;
    
            case 4:
            display();
            break;  
        }
        q_operation--;
    }
    
    return 0;
}