#include <iostream>

const int MAX_SIZE = 100; // Maximum size of the stack

class Stack {
private:
    int top;
    int arr[MAX_SIZE];

public:
    Stack() {
        top = -1; // Initialize the top of the stack
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to check if the stack is full
    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    // Function to push an element onto the stack
    void push(int data) {
        if (isFull()) {
            std::cout << "Stack is full. Cannot push." << std::endl;
            return;
        }
        arr[++top] = data;
    }

    // Function to pop an element from the stack
    void pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
            return;
        }
        --top;
    }

    // Function to get the top element of the stack (peek)
    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot peek." << std::endl;
            return -1; // Return a default value
        }
        return arr[top];
    }
};

int main() {
    Stack stack;

    std::cout << "Stack operations:" << std::endl;
    std::cout << "1. Push" << std::endl;
    std::cout << "2. Pop" << std::endl;
    std::cout << "3. Peek" << std::endl;
    std::cout << "4. Is Full" << std::endl;
    std::cout << "5. Is Empty" << std::endl;
    std::cout << "6. Quit" << std::endl;

    int choice, data;

    do {
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter data to push: ";
                std::cin >> data;
                stack.push(data);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                std::cout << "Top element: " << stack.peek() << std::endl;
                break;
            case 4:
                if (stack.isFull()) {
                    std::cout << "Stack is full." << std::endl;
                } else {
                    std::cout << "Stack is not full." << std::endl;
                }
                break;
            case 5:
                if (stack.isEmpty()) {
                    std::cout << "Stack is empty." << std::endl;
                } else {
                    std::cout << "Stack is not empty." << std::endl;
                }
                break;
            case 6:
                std::cout << "Exiting program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 6);

    return 0;
}
