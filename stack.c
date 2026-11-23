#include <stdio.h>
#include <conio.h>

int top = -1;
int size = 5;
int stack[5];
int counter = 0;

void push(int value)
{
    if (top == (size - 1))
    {
        printf("Full Size Happened \n\n");
    }
    else
    {
        top += 1;
        stack[top] = value;
        printf("Successfully VAlue pushed : %d \n", value);
        counter += 1;
        printf("counter vlaue is : %d ", counter);
        printf("\n");
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty.. ");
    }
    else
    {
        int poped_value = stack[top];
        printf("popped value is : %d \n", poped_value);
        top -= 1;
        counter -= 1;
        printf("counter value is %d \n", counter);
    }
}

int main()
{
    push(10);
    push(20);
    push(20);
    push(20);
    push(20);
    push(20);

    pop();

    return 0;
}