//Problem(HW[191-35-2723]):
/*Suppose you have one stack with size 6.
Now insert some elements in the stack.
If the inserted data is "1"and before it if there exist at least two data,
then POP the last two elements, add them and PUSH the sum in the stack,
then push 1. STACK should preserve the condition of "Overflow" and "Underflow". */

#include <stdio.h>
#define size 6

typedef struct
{
    int stk[size];
    int top;
}stack;
stack s;

void push ()
{
    int num,sum;
    if (s.top == (size - 1))
    {
        printf ("Stack is Overflow!\n");
        return;
    }
    else
    {
        printf ("Enter the element : ");
        scanf ("%d", &num);
        if(num == 1 && s.top >= 1)
            {
                sum = s.stk[s.top]+s.stk[s.top-1];
                s.stk[s.top-1] = sum;
                s.stk[s.top] = 1;
            }
        else
        {
            s.top++;
            s.stk[s.top] = num;
        }
    }
}
int pop ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("Stack is Underflow!\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf ("Deleted element is = %d\n", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return(num);
}
void display ()
{
    int i;
    if (s.top == -1)
    {
        printf ("Stack is empty!\n");
        return;
    }
    else
    {
        printf ("\n The status of the stack is \n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%d\n", s.stk[i]);
        }
    }
    printf ("\n");
}

void main ()
{

    int choice;
    int option = 1;
    s.top = -1;

    printf ("STACK OPERATION\n");
    while (option)
    {
        printf ("      1    -->    INSERT               \n");
        printf ("      2    -->    DELETE               \n");
        printf ("      3    -->    DISPLAY               \n");
        printf ("      4    -->    EXIT           \n\n");

        printf ("Press what do you want: ");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
        }
        fflush (stdin);
        printf ("Type 0 to stop or 1 to continue: \n");
        scanf    ("%d", &option);
    }
}
