
#include <bits/stdc++.h>
using namespace std;

struct Queue {
	int front, rear, capacity;
	int* queue;
	Queue(int c)
	{
		front = rear = 0;
		capacity = c;
		queue = new int;
	}

	~Queue() { delete[] queue; }


	void queueEnqueue(int data)
	{
		
		if (capacity == rear) {
			printf("\nQueue is full\n");
			return;
		}

	
		else {
			queue[rear] = data;
			rear++;
		}
		return;
	}

	
	void queueDequeue()
	{
	
		if (front == rear) {
			printf("\nQueue is empty\n");
			return;
		}

		
		else {
			for (int i = 0; i < rear - 1; i++) {
				queue[i] = queue[i + 1];
			}

			
			rear--;
		}
		return;
	}

	
	void queueDisplay()
	{
		int i;
		if (front == rear) {
			printf("\nQueue is Empty\n");
			return;
		}

		
		for (i = front; i < rear; i++) {
			printf(" %d <-- ", queue[i]);
		}
		return;
	}

	
	void queueFront()
	{
		if (front == rear) {
			printf("\nQueue is Empty\n");
			return;
		}
		printf("\nFront Element is: %d", queue[front]);
		return;
	}
};


int main(void)
{
	Queue q(4);


	q.queueDisplay();

	q.queueEnqueue(21);
	q.queueEnqueue(31);
	q.queueEnqueue(41);
	q.queueEnqueue(51);

	q.queueDisplay();

	q.queueEnqueue(61);

	q.queueDisplay();

	q.queueDequeue();
	q.queueDequeue();

	printf("\n\nafter two node deletion\n\n");

	q.queueDisplay();

	q.queueFront();

	return 0;
}
