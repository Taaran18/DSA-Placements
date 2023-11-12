# Performing push(), pop(), peek(), count(), change() and display() operations on a stack using isEmpty() and isFull() in Python.

# Initialize stack size, stack and top pointer
size = int(input("Enter size of stack: "))
stack = []
top = -1


# Function to check if the stack is empty.
def isEmpty():
    return top == -1


# Function to check if the stack is full.
def isFull():
    return top == size - 1


# Function to push an element into the stack.
def push(data):
    global top

    # Checking if the stack is full.
    if isFull():
        print("StackOverflow")

    # If the stack is not full, then push the element into the stack.
    else:
        top += 1
        stack.append(data)

        print(data, "is pushed into stack")


# Function to pop an element from the stack.
def pop():
    global top

    # Checking if the stack is empty.
    if isEmpty():
        print("Stack Underflow")
        return -1

    # If the stack is not empty, then pop the element from the stack.
    else:
        top -= 1
        return stack.pop()


# Function to return the top element of the stack.
def peek():
    # Checking if the stack is empty.
    if isEmpty():
        print("Stack empty")
        return -1

    # If the stack is not empty, then return the top element of the stack.
    else:
        return stack[top]


# Function to return the count of elements in the stack.
def count():
    return top + 1


# Function to change an element in the stack.
def change():
    # Checking if the stack is empty.
    if isEmpty():
        print("Stack empty")

    # If the stack is not empty, then change the element in the stack.
    else:
        pos = int(input("Enter position to change: "))

        # Checking if the position is valid.
        if pos < 0 or pos > top:
            print("Invalid position")

        # If the position is valid, then change the element in the stack.
        else:
            val = int(input("Enter new value: "))
            stack[pos] = val


# Function to display the elements in the stack.
def display():
    # Checking if the stack is empty.
    if isEmpty():
        print("Stack empty")

    # If the stack is not empty, then display the elements in the stack.
    else:
        print("Stack elements: ", stack)


# Driver code
while True:
    print("STACK OPERATIONS")
    print("1. Push")
    print("2. Pop")
    print("3. Peek")
    print("4. Count")
    print("5. Change")
    print("6. Display")
    print("7. Exit")

    choice = int(input("Enter choice: "))

    if choice == 1:
        data = int(input("Enter data to push: "))
        push(data)

    elif choice == 2:
        data = pop()
        if data != -1:
            print("Popped element:", data)

    elif choice == 3:
        data = peek()
        if data != -1:
            print("Top element:", data)

    elif choice == 4:
        print("Stack elements:", count())

    elif choice == 5:
        change()

    elif choice == 6:
        display()

    elif choice == 7:
        break

    else:
        print("Invalid choice")

print("Program terminated")
