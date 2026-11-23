
// chatgpt inspired code..
#include <stdio.h>
#include <conio.h>
#include <string.h>

int f = -1;
int r = -1;
int queue[5];
int size = 5;

void enqueue(int data)
{
    if (r == (size - 1))
    {
        printf("SIZE OF QUEUE IS FULL.. \n\n\n");
    }
    else
    {
        if (r == -1 & f == -1)
        {
            f = 0;
        }
        r += 1;
        queue[r] = data;
        printf("Succesfully enqueued value %d \n", data);
    }
}

void dequeue()
{
    if (f < 0)
    {
        printf("Queue is empty.. \n");
    }
    else
    {
        if (f != r)
        {
            int removed_value = queue[f];
            f += 1;
            printf("removed value is %d \n", removed_value);
        }
        else
        {
            printf("Queue OverFlow Reached... \n");
            r = -1;
            f = -1;
        }
    }
}

int main()
{
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    return 0;
}
// original code ..
// #include <stdio.h>
// #include <conio.h>
// #include <string.h>

// int f = -1;
// int r = -1;
// int queue[5];
// int size = 5;

// void enqueue(int data)
// {
//     if (r == (size - 1))
//     {
//         printf("SIZE OF QUEUE IS FULL.. \n\n\n");
//     }
//     else
//     {
//         if (r == -1 & f == -1)
//         {
//             f = 0;
//         }
//         r += 1;
//         queue[r] = data;
//         printf("Succesfully enqueued value %d \n", data);
//     }
// }

// void dequeue()
// {
//     if (f < 0)
//     {
//         printf("Queue is empty.. \n");
//     }
//     else
//     {
//         if (f != (size))
//         {
//             int removed_value = queue[f];
//             f += 1;
//             printf("removed value is %d \n", removed_value);
//         }
//         else
//         {
//             printf("Queue OverFlow Reached... \n");
//             r = -1;
//             f = -1;
//         }
//     }
// }

// int main()
// {
//     enqueue(20);
//     enqueue(30);
//     enqueue(40);
//     enqueue(50);
//     enqueue(60);
//     enqueue(70);

//     dequeue();
//     dequeue();
//     dequeue();
//     dequeue();
//     dequeue();

//     return 0;
// }

// chatgpt given code
void dequeue()
{
    if (f == -1)
    {
        printf("Queue is empty..\n");
    }
    else
    {
        int removed_value = queue[f];
        printf("Removed value is %d\n", removed_value);

        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            f++;
        }
    }
}