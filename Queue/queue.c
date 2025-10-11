#include <stdio.h>
#include <stdlib.h>

#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
	if (rear == N - 1)
	{
		printf("overflow\n");
	}
	else if (front == -1 && rear == -1)
	{
		front = rear = 0;
		queue[rear] = x;
	}
	else
	{
		rear++;
		queue[rear] = x;
	}
}

void dequeue()
{
	if (front == -1 && rear == -1)
	{
		printf("underflow\n");
	}
	else if (front == rear)
	{
		// only one element
		printf("%d\n", queue[front]);
		front = rear = -1;
	}
	else
	{
		printf("%d\n", queue[front]);
		front++;
	}
}

void display()
{
	int i;
	if (front == -1 && rear == -1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		for (i = front; i <= rear; i++)
		{
			printf("%d ", queue[i]);
		}
		printf("\n");
	}
}

void peek()
{
	if (front == -1 && rear == -1)
		printf("Queue is empty\n");
	else
		printf("%d\n", queue[front]);
}

int main()
{
	int choice, x;
	while (1)
	{
		printf("1.enqueue\n2.dequeue\n3.display\n4.peek\n5.exit\n");
		printf("enter your choice\n");
		if (scanf("%d", &choice) != 1) {
			int c;
			while ((c = getchar()) != '\n' && c != EOF) ;
			continue;
		}

		switch (choice)
		{
			case 1:
				printf("enter the value to be enqueued\n");
				if (scanf("%d", &x) == 1)
					enqueue(x);
				else {
					int c;
					while ((c = getchar()) != '\n' && c != EOF) ;
				}
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				peek();
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("invalid choice\n");
				break;
		}
	}

	return 0;
}
