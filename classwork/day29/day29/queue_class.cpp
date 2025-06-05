
#include <iostream>
#define MAX 5
using namespace std;
class Queue {
private:
	int enqueue;
	int dequeue;
	int arr[MAX];
public:
	Queue();
	bool enqueue(int);
	bool dequeue();
	void display();
	int rear = 0;
	int front = 0;
	int arr[MAX];

	


};
Queue::Queue() {
	
}

bool Queue::enqueue(int v){
	if (rear == MAX)
	{
		cout << "Queue is full" << endl;
		return EXIT_SUCCESS;
	}
	arr[rear] = v;
	rear++;

	return EXIT_SUCCESS;
}

bool Queue::dequeue() {
	
		if ((rear == front) || (front == MAX))
		{
			cout << "Queue is empty" << endl;
			rear = 0;
			front = 0;
			return EXIT_SUCCESS;
		}
		cout << arr[front] << " got dequeued" << endl;
		front++;

		return EXIT_SUCCESS;
	
}

void display() {

	if ((rear == front) || (front == MAX))
	{
		cout << "Queue is empty" << endl;
		rear = 0;
		front = 0;
		return;
	}
	cout << "Queue elements are\n";
	for (int i = front; i < rear;i++)
		cout << arr[i] << " ";
	cout << endl;
}


