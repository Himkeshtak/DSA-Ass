# include <stdio.h>
# include <stdbool.h>

char str[1000];
char stack[100];
int top = -1;

void push(char ch)
{
    top++;
    stack[top] = ch ;
}

char pop()
{
    return stack[top--];
}

bool isValid(char *str)
{
    for(int i=0; str[i] != '\0';i++)
    {   
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '[')
        {
            push(ch);
            //stack[top++] = ch;
        }
        else{
            
            if(top == -1)
            {
                return false;
            }
            
            char last = pop();
            //pop()
            if((ch == ')' && last != '(')||
               (ch == ']' && last != '[')||
               (ch == '}' && last != '{'))
               {
                   return false;
               }
        }
    }
    return true;
}

int main()
{
   scanf("%s", str);
   if(isValid(str))
   {
        printf("True");
   }
   else
   {
        printf("False");   
   }
   return 0;
}
