// Performing push(), pop(), peek(), count(), change() and display() operations on a stack using isEmpty() and isFull() in C.

#include <stdio.h>
#include <stdlib.h>

// Initializing the maximum size, stack and top of the stack
int stackSize;
int stack[100];
int top = -1;

// Function to check if the stack is empty.
int isEmpty()
{
    return top == -1;
}

// Function to check if the stack is full.
int isFull()
{
    return top == stackSize - 1;
}

// Function to push an element into the stack.
void push(int data)
{
    // Checking if the stack is full.
    if (isFull())
    {
        printf("Stack Overflow.\n");
    }

    // If the stack is not full, then push the element into the stack.
    else
    {
        top++;
        stack[top] = data;
        printf("%d is pushed into the stack.\n", data);
    }
}

// Function to pop an element from the stack.
int pop()
{
    int data;

    // Checking if the stack is empty.
    if (isEmpty())
    {
        printf("Stack Underflow.\n");
        return -1;
    }

    // If the stack is not empty, then pop the element from the stack.
    else
    {
        data = stack[top];
        top--;
        return data;
    }
}

// Function to peek the top element of the stack.
int peek()
{
    // Checking if the stack is empty.
    if (isEmpty())
    {
        printf("Stack Underflow.\n");
        return -1;
    }

    // If the stack is not empty, then peek the top element of the stack.
    else
    {
        return stack[top];
    }
}

// Function to count the number of elements in the stack.
int count()
{
    printf("The number of elements in the stack is %d.\n", top + 1);
    return top + 1;
}

// Function to change an element in the stack.
void change()
{
    // Checking if the stack is empty.
    if (isEmpty())
    {
        printf("Stack is empty\n");
    }

    // If the stack is not empty, then change the element in the stack.
    else
    {
        printf("Enter the position to change: ");
        int position;
        scanf("%d", &position);

        // Checking if the position is valid.
        if (position < 0 || position > top)
        {
            printf("Invalid position\n");
        }

        // If the position is valid, then change the element in the stack.
        else
        {
            printf("Enter the new value: ");
            int val;
            scanf("%d", &val);

            stack[position] = val;
            printf("Element at position %d changed to %d.\n", position, val);
        }
    }
}

// Function to display the elements in the stack.
void display()
{
    // Checking if the stack is empty.
    if (isEmpty())
    {
        printf("Stack is empty\n");
    }
    
    // If the stack is not empty, then display the elements in the stack.
    else
    {
        printf("Stack elements: ");
        // Printing the elements in the stack from top to bottom.
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

// Main function
int main()
{
    int choice, data;

    printf("Enter the size of the stack: ");
    scanf("%d", &stackSize);

    while (choice != 7)
    {
        printf("STACK OPERATIONS\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Count\n");
        printf("5. Change\n");
        printf("6. Display\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to push: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop();
            if (data != -1)
                printf("Popped element: %d\n", data);
            break;
        case 3:
            data = peek();
            if (data != -1)
                printf("Top element: %d\n", data);
            break;
        case 4:
            printf("Count: %d\n", count());
            break;
        case 5:
            change();
            break;
        case 6:
            display();
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}