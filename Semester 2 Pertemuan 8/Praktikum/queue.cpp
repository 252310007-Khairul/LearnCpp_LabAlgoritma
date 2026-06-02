#include <iostream>
using namespace std;

const int MAX = 100;

class Queue {
	private:
	    int rear;
	    int front;
	    int arr[MAX];
	    int count;

	public:
	    Queue() {
	        front = 0;
	        rear = MAX -1;
	        count = 0;
	    }

    void enqueue(int x) {
        if (count >= MAX) {
            cout << "Queue is full"<< endl;
            return;
        }
        rear = (rear + 1) % MAX;
        arr[rear] = x;
        count++;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
            return;
        }
        int x = arr[front];
        front = (front + 1) % MAX;
        return x;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    int size() {
        return count;
    }
    
    bool isEmpty()
    {
    	return count == 0;
	}
	
	bool isFull()
	{
		return count == MAX;
	}
};

int main() {
    Queue* queue = new Queue();
    queue.enqueue(30);
    queue.enqueue(14);
    queue.enqueue(20);

    cout << "Ukuran queue: " << queue.size() << endl;
    cout << "Dequeue paling depan: " << queue->dequeue() << endl; 
    cout << "Ukuran queue setelah di dequeue: " << queue->size() << endl; 

    return 0;
}
