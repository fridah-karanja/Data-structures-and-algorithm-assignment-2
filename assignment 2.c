#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;


void enqueue(int x)
{
    if (rear == MAX - 1)
    {
        printf("The Queue is Full!!\n");
    }
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = x;

        printf("%d has been Queued!\n", x);
    }
}


int dequeue()
{
    if (front == -1)
    {
        printf("The Queue is Empty!!\n");
        return -1;
    }

    int x = queue[front];

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }

    printf("%d has been Dequeued!\n", x);

    return x;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    return 0;
}
