#include "Stack.cpp"

int main() {
	Stack<int> stack;

	// Inserting elements into the stack
	cout << "Inserting elements into the stack" << endl;
	stack.push(5);
	stack.push(7);
	stack.push(4);
	stack.push(9);
	stack.push(10);

	cout << "Printing elements of the stack" << endl;
	stack.print();

	cout << "Popping an element from the stack" << endl;
	stack.pop();

	cout << "Printing elements of the stack" << endl;
	stack.print();

	cout << "Getting top element of the stack" << endl;
	cout << stack.top() << endl;

	cout << "Printing elements of the stack" << endl;
	stack.print();
}