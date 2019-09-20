#ifndef STACK_H
#define STACK_H

#include "List.cpp"

template<typename T>
class Stack {
private:
	List<T> list;
public:
	void push(const T& data);
	void pop();
	T& top() const;
	int size() const;
	void print() const;
};


#endif