// Performing push(), pop(), peek(), count(), change() and display() operations on a stack using isEmpty() and isFull() in Javascript.

// Importing prompt-sync module
const prompt = require("prompt-sync")({ sigint: true });

// Stack class
class Stack {
  constructor(size) {
    this.size = size;
    this.stack = new Array(size);
    this.top = -1;
  }

  // Function to check if the stack is empty
  isEmpty() {
    return this.top === -1;
  }

  // Function to check if the stack is full
  isFull() {
    return this.top === this.size - 1;
  }

  // Function to push element to stack
  push(data) {
    // Check if stack is full
    if (this.isFull()) {
      console.log("Overflow");
    }

    // If not full, push the element to the stack
    else {
      this.top++;
      this.stack[this.top] = data;
      console.log(data + " pushed to stack");
    }
  }

  // Function to pop element from stack
  pop() {
    // Check if stack is empty
    if (this.isEmpty()) {
      console.log("Underflow");
      return -1;
    }

    // If not empty, pop the element from the stack
    else {
      let data = this.stack[this.top];
      this.top--;
      return data;
    }
  }

  // Function to get top element of stack
  peek() {
    // Check if stack is empty
    if (this.isEmpty()) {
      console.log("Stack empty");
      return -1;
    }

    // If not empty, return the top element of the stack
    else {
      return this.stack[this.top];
    }
  }

  // Function to count the elements of stack
  count() {
    return this.top + 1;
  }

  // Function to change value at index
  change(index, value) {
    // Check if stack is empty
    if (this.isEmpty()) {
      console.log("Stack empty");
    }

    // If not empty, check if index is valid
    else if (index < 0 || index > this.top) {
      console.log("Invalid index");
    }

    // If index is valid, change the value at the index
    else {
      this.stack[index] = value;
      console.log("Value changed at index " + index);
    }
  }

  // Function to display the elements of stack
  display() {
    // Check if stack is empty
    if (this.isEmpty()) {
      console.log("Stack empty");
    }

    // If not empty, display the elements of the stack
    else {
      let str = "";
      // Loop to display the elements of the stack
      for (let i = this.top; i >= 0; i--) {
        str += this.stack[i] + " ";
      }
      console.log(str);
    }
  }
}

// Driver code
let stackSize = parseInt(prompt("Enter size of stack: "));
let stack = new Stack(stackSize);

while (true) {
  let choice = parseInt(
    prompt(`
    STACK OPERATIONS
  
    1. Push
    2. Pop 
    3. Peek
    4. Count
    5. Change
    6. Display
    7. Exit
  
    Enter choice: `)
  );

  switch (choice) {
    case 1:
      let data = parseInt(prompt("Enter data to push: "));
      stack.push(data);
      break;

    case 2:
      data = stack.pop();
      if (data !== -1) {
        console.log("Popped element: " + data);
      }
      break;

    case 3:
      data = stack.peek();
      if (data !== -1) {
        console.log("Top element: " + data);
      }
      break;

    case 4:
      console.log("Stack size: " + stack.count());
      break;

    case 5:
      let index = parseInt(prompt("Enter index: "));
      data = parseInt(prompt("Enter value: "));
      stack.change(index, data);
      break;

    case 6:
      stack.display();
      break;

    case 7:
      console.log("Program ended");
      break;

    default:
      console.log("Invalid choice");
  }
}