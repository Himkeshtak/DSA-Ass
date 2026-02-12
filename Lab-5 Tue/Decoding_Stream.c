# include <stdio.h>
# include <string.h>
# include <stdbool.h>

char stack[20];
char input[20];
int top = -1;

void push(char ch)
{
    top++;
    stack[top] = ch;
}

char pop()
{    
    return stack[top--];
}

bool isEmpty()
{
    return top == -1;
}

bool isvalid(char *input)
{
    for (int i = 0; input[i] != '\0'; i++)
    {
        char ch = input[i];
        if (input[i] == 'a' || input[i] == 'c' || input[i] == 'e')
        {
            push(ch);
        }
        else
        {
            if(isEmpty())
            {
                return false;
            }

            char last = pop();
            if((last == 'a' && ch != 'b') ||
               (last == 'c' && ch != 'd') ||
               (last == 'e' && ch != 'f'))
            {
                return false;
            }
        }
    }
   return isEmpty();
}

int main()
{   
    //char in_arr[20]
    scanf("%s", input);
   
    if(isvalid(input))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}