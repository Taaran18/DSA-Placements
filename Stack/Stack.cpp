// Performing push(), pop(), peek(), count(), change() and display() operations on a stack using isEmpty() and isFull() in C++.

#include <iostream>
using namespace std;

// Stack class.
class Stack
{
    // Private members of the class.
private:
    int stackSize;
    int top;
    int *stackArr;

public:
    // Public members of the class.
    Stack()
    {
        top = -1;
        stackArr = new int[100];
    }

    // Function to check if the stack is empty.
    bool isEmpty()
    {
        return (top == -1);
    }

    // Function to check if the stack is full.
    bool isFull()
    {
        return (top == stackSize - 1);
    }

    // Function to push an element in the stack.
    void push(int data)
    {
        // Check if the stack is full.
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
        }

        // If the stack is not full, push the element in the stack.
        else
        {
            top++;
            stackArr[top] = data;
            cout << data << " pushed into stack" << endl;
        }
    }

    // Function to pop an element from the stack.
    int pop()
    {
        // Check if the stack is empty.
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }

        // If the stack is not empty, pop the element from the stack.
        else
        {
            int data = stackArr[top];
            top--;
            return data;
        }
    }

    // Function to peek the top element of the stack.
    int peek()
    {
        // Check if the stack is empty.
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }

        // If the stack is not empty, return the top element of the stack.
        else
        {
            return stackArr[top];
        }
    }

    // Function to count the total number of elements in the stack.
    int count()
    {
        return (top + 1);
    }

    // Function to change an element in the stack.
    void change()
    {
        // Check if the stack is empty.
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
        }

        // If the stack is not empty, change the element in the stack.
        else
        {
            cout << "Enter position to change: ";
            int pos;
            cin >> pos;

            // Check if the position is valid.
            if (pos < 0 || pos > top)
            {
                cout << "Invalid position" << endl;
            }

            // If the position is valid, change the element in the stack.
            else
            {
                cout << "Enter new value: ";
                int val;
                cin >> val;
                stackArr[pos] = val;
            }
        }
    }

    // Function to display the elements in the stack.
    void display()
    {
        // Check if the stack is empty.
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
        }
        // If the stack is not empty, display the elements in the stack.
        else
        {
            cout << "Stack elements: ";
            // Display the elements in the stack from top to bottom.
            for (int i = top; i >= 0; i--)
            {
                cout << stackArr[i] << " ";
            }
            cout << endl;
        }
    }
};

// Main function.
int main()
{
    Stack s;
    int choice, data;

    cout << "Enter size of stack: ";
    cin >> s.size;

    while (choice != 7)
    {

        cout << "STACK OPERATIONS" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Count" << endl;
        cout << "5. Change" << endl;
        cout << "6. Display" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter data to push: ";
            cin >> data;
            s.push(data);
            break;
        case 2:
            data = s.pop();
            if (data != -1)
            {
                cout << "Popped element: " << data << endl;
            }
            break;
        case 3:
            data = s.peek();
            if (data != -1)
            {
                cout << "Top element: " << data << endl;
            }
            break;
        case 4:
            cout << "Total elements: " << s.count() << endl;
            break;
        case 5:
            s.change();
            break;
        case 6:
            s.display();
            break;
        case 7:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}