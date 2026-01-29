# include <stdio.h>
# include <stdlib.h>

struct node{
    int value;
    struct node *next;
};

struct node* head=NULL;

struct node* create_node(int data)
{
    struct node * new_node = (struct node*)malloc(sizeof(struct node));
    if (!new_node)
    {
        printf("Memory space not allocated");
        return NULL;
    }
    new_node->value = data;
    new_node->next=NULL;
    return new_node;
}

void insert_end(int data)
{
    struct node * new_node = create_node(data);
    if(head==NULL)
    {
        head = new_node;
        return;
    }

    struct node * temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insert_begin(int data)
{
    struct node * new_node = create_node(data);
    if(head==NULL)
    {
        head = new_node;
        return;
    }
    struct node * temp = head;
    head = new_node;
    new_node->next = temp;
}


// int 'after' is the variable made which shows that we ahve to place our new node after 
// after we get thhis data node after = data of node (after which new node will be inserted) 
void insert_after(int data, int after)
{
    struct node * new_node = create_node(data);
    if(head == NULL)
    {
        head = new_node;
        return;
    }
    struct node * temp = head;
    while(temp->value!=after)   
    {
        temp = temp->next;
    } 
    struct node * ahead = temp->next;
    temp->next = new_node;
    new_node->next = ahead;
}

void insert_before(int data, int before)
{
    struct node * new_node = create_node(data);
    int after;
    if(head == NULL)
    {
        printf("the linked list is empty");
        return;
    }
    struct node * temp = head;
    struct node * temp2 = NULL;
    while(temp->value!=before)   
    {
        temp2 = temp; // due to thsi clever step temp2 stpores data of one node back
        temp = temp->next;
        if(temp->value == before)
        {
            after = temp2->value;
        }     
    } 
}

void display()
{
    struct node * temp = head;
    while (temp!=NULL)
    {
        printf("%d\n",temp->value);
        temp = temp->next;
    }
}

int count()
{   
    int count=0;
    struct node * temp = head;
    while (temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}


int main()
{
    int data, n;
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&data);
        insert_end(data);
    }
    display();
    return 0;
}

// Biggest lessons form this are for linked which becomes the mool mantra
//1. make modular function for each and every small task, every!!!
//2. Linked list mein chahe insertion karna ho ya deletion ya traversing 
//   pivot is NULL ,, jab tak NULL nahi aayee tab tak chalte rehna.
//3. when you store a node in some temp variable then you can use temp->next to 
//   to move the next of the new_node. variable ke use se hi next ya data daalna 
//   wagerah is possible
