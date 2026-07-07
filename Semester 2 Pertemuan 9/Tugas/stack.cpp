#include <iostream>

using namespace std;

const int MAX = 5;

class Stack {
private:
    int top;
    int stack[MAX];
    int items;

public:
    Stack() {
        items = 0;
        top = -1;
    }

    int pop() {
        if (!items) {
            cout << "Stack kosong." << endl;
            return -1;
        }

        int value = stack[top];
        top--;
        items--;

        return value;
    }

    void insert(int data) {
        top++;
        stack[top] = data;
        items++;
    }

    void printStack() {
        cout << "Isi Stack :" << endl;

        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }

    int peek() {
        return stack[top];
    }

    int totalItems() {
        return items;
    }
};

int main() {

    Stack* stack = new Stack();

    stack->insert(621);
    stack->insert(999);
    stack->insert(201);
    stack->insert(94);
    stack->insert(124);

    cout << "Elemen teratas dari stack: "
         << stack->peek() << endl << endl;

    stack->printStack();

    return 0;
}


