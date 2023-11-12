// Performing push(), pop(), peek(), count(), change() and display() operations on a stack using isEmpty() and isFull() in Java.

package Stack;

import java.util.Scanner;

class Stack {
    // Initializing the maximum size, stack and top of the stack
    int size;
    int top;
    int[] stack;

    // Constructor to initialize the stack
    Stack(int size) {
        this.size = size;
        this.stack = new int[size];
        this.top = -1;
    }

    // Function to check if the stack is empty 
    boolean isEmpty() {
        return top == -1;
    }

    // Function to check if the stack is full
    boolean isFull() {
        return top == size - 1;
    }

    // Function to push an element to the stack
    void push(int data) {
        // Check if the stack is full
        if (isFull()) {
            System.out.println("Overflow");
        }

        // If not full, push the element to the stack
        else {
            top++;
            stack[top] = data;
            System.out.println(data + " pushed to stack");
        }
    }

    // Function to pop an element from the stack
    int pop() {
        // Check if the stack is empty
        if (isEmpty()) {
            System.out.println("Underflow");
            return -1;
        } 

        // If not empty, pop the element from the stack
        else {
            int data = stack[top];
            top--;
            return data;
        }
    }

    // Function to peek the top element of the stack
    int peek() {
        // Check if the stack is empty
        if (isEmpty()) {
            System.out.println("Stack empty");
            return -1;
        } 
        
        // If not empty, return the top element of the stack
        else {
            return stack[top];
        }
    }

    // Function to count the number of elements in the stack
    int count() {
        return top + 1;
    }

    // Function to change the value of an element at a given position
    void change(int pos, int val) {
        // Check if the stack is empty
        if (isEmpty()) {
            System.out.println("Stack empty");
        } 
        
        // Check if the position is valid
        else if (pos < 0 || pos > top) {
            System.out.println("Invalid position");
        } 
        
        // If not empty and position is valid, change the value of the element at the given position
        else {
            stack[pos] = val;
            System.out.println("Value changed at " + pos);
        }
    }

    // Function to display the elements of the stack
    void display() {
        // Check if the stack is empty
        if (isEmpty()) {
            System.out.println("Stack empty");
        } 
        
        // If not empty, display the elements of the stack
        else {
            for (int i = top; i >= 0; i--) {
                System.out.print(stack[i] + " ");
            }
            System.out.println();
        }
    }
}

// Main class
public class Main {

    public static void main(String[] args) {

        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter stack size: ");
            int size = sc.nextInt();

            Stack stack = new Stack(size);

            int choice, data;
            while (true) {
                System.out.println("STACK OPERATIONS");
                System.out.println("1. Push");
                System.out.println("2. Pop");
                System.out.println("3. Peek");
                System.out.println("4. Count");
                System.out.println("5. Change");
                System.out.println("6. Display");
                System.out.println("7. Exit");

                System.out.print("Enter choice: ");
                choice = sc.nextInt();

                switch (choice) {
                    case 1:
                        System.out.print("Enter data to push: ");
                        data = sc.nextInt();
                        stack.push(data);
                        break;
                    case 2:
                        data = stack.pop();
                        if (data != -1) {
                            System.out.println("Popped element: " + data);
                        }
                        break;

                    case 3:
                        data = stack.peek();
                        if (data != -1) {
                            System.out.println("Top element: " + data);
                        }
                        break;

                    case 4:
                        System.out.println("Count elements: " + stack.count());
                        break;

                    case 5:
                        System.out.print("Enter position: ");
                        int pos = sc.nextInt();
                        System.out.print("Enter value: ");
                        data = sc.nextInt();
                        stack.change(pos, data);
                        break;

                    case 6:
                        System.out.println("Stack elements: ");
                        stack.display();
                        break;

                    case 7:
                        System.exit(0);
                    default:
                        System.out.println("Invalid choice");
                }
            }
        }
    }
}