#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <cassert>
using namespace std;

template<typename T>
struct Node {
	T data;
	Node<T>* next;
};

template<typename T>
class List {
private:
	Node<T>* head;
	int count;
	Node<T>* makeNode(const T& value);
public:
	List();
	~List();
	void insert(const T& value, bool type);
	void erase(int pos);
	T& get(int pos) const;
	void print() const;
	int size() const;
};

#endif