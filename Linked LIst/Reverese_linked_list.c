# include <stdio.h>
# include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL, *prev=NULL;

struct node* create(int value)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));

    if(!new_node)
    {
        printf("space not allocated, ERROR");
        return;
    }
    
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}

void insert(int value)
{   
    struct node * new_node = create(value);

    if (head==NULL)
    {
        head = new_node;
        //new_node->next=NULL;
        return;
    }
    struct node * temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next = new_node;
}


struct node * reverse()
{
    struct node *curr = head,  *next=NULL;

    head = NULL;
    while(curr!=NULL)
    {
        next = curr->next; 
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
    //if(head!=NULL)
    //{
    //    temp_next = temp->next; 
    //    head = NULL;
    //    temp->next = head;
    //}
//
    //While(temp_next->next!=NULL)
    //{
    //    temp = temp_next;
    //    temp_next = temp->next ;
    //    temp
    //}
    ////temp->next = head;
    //head = temp;

}

void print()
{
    struct node * temp = prev;
    while (temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

int main()
{   
    int value, n;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&value);
        insert(value);
    }
    reverse();
    print();

    return 0;

}