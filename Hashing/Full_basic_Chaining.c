# include <stdio.h>
# include <stdlib.h>

#define SIZE 10

struct module{
    //int hash_pos;
    int data;
    struct module *next;
};

int hash_func(int key)
{   
    int position;
    position = (key*2)+1;
    return position;
}

int insert()
{

}

int chain()
{

}

void delete()
{

}

int main()
{
    int hash_pos=0, opr;
    char key[10];
    struct module *hash_table[SIZE];
    scanf("%s", key);

    
}