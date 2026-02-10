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

int insert(int key)
{
    hash_pos = 
}

int chain()
{

}

void delete()
{

}

void search()
{


}

int main()
{
    int hash_pos=0, opr, n;
    char key[10];
    struct module *hash_table[SIZE];
   
    scanf("%d", &n);

    for (int i=0;i<n;i++)
    {
        scanf("%s", key);
    }

    scanf("%d", &opr);
    switch opr(
        case 1: 
            insert(key);
            break;
        case 2;
            delete(key);
            break;
        case 3;
            search(key);
            break;
        case 4;
            

    )
    return 0;
}