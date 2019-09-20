#ifndef STACK_CPP
#define STACK_CPP

#include "Stack.h"

template<typename T>
void Stack<T>::push(const T& data) {
	list.insert(data, false);
}

template<typename T>
void Stack<T>::pop() {
	list.erase(1);
}

template<typename T>
T& Stack<T>::top() const {
	return list.get(1);
}

template<typename T>
int Stack<T>::size() const {
	return list.size();
}

template<typename T>
void Stack<T>::print() const {
	list.print();
}

#endif