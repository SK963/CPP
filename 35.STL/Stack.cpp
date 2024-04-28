
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> stack;

    // Push elements onto the stack
    stack.push(5);
    stack.push(10);
    stack.push(15);

    // Output the top element
    cout << "Top element: " << stack.top() << endl; 
	// Output: Top element: 15

    // Pop the top element
    stack.pop();

    // Output the size of the stack
    cout << "Stack size: " << stack.size() << endl; // Output: Stack size: 2

    // Check if the stack is empty
    cout << "Is the stack empty? " << boolalpha << stack.empty() << std::endl; // Output: Is the stack empty? false

    return 0;
}

