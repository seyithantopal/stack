#ifndef LIST_CPP
#define LIST_CPP

#include "List.h"

template<typename T>
List<T>::List() : head{nullptr}, count{0} {}

template<typename T>
List<T>::~List() {
	Node<T>* del = head;
	while(head) {
		head = head->next;
		delete del;
		del = head;
	}
}

template<typename T>
void List<T>::insert(const T& value, bool type) {
	Node<T>* temp = makeNode(value);
	Node<T>* tail = head;
	if(type) {
		if(count == 0) {
			head = temp;
		} else {
			while(tail->next != nullptr) tail = tail->next;
			tail->next = temp;
		}
	}
	else {
		if(count == 0) {
			head = temp;
		} else {
			temp->next = head;
			head = temp;
		}
	}
	count++;
}

template<typename T>
void List<T>::erase(int pos) {
	Node<T>* ptr = head;
	Node<T>* prior = nullptr;
	if(pos == 1) {
		head = ptr->next;
		delete ptr;
	}
	else {
		for(int i = 1; i < pos; ++i) {
			prior = ptr;
			ptr = ptr->next;
		}
		prior->next = ptr->next;
		delete ptr;
	}
	count--;
}

template<typename T>
T& List<T>::get(int pos) const {
	if(pos == 1) {
		return head->data;
	}
	else {
		Node<T>* temp = head;
		for(int i = 1; i < pos; ++i) {
			temp = temp->next;
		}
		return temp->data;
	}
}

template<typename T>
Node<T>* List<T>::makeNode(const T& value) {
	Node<T>* temp = new Node<T>;
	temp->data = value;
	temp->next = nullptr;
	return temp;
}

template<typename T>
void List<T>::print() const {
	Node<T>* temp = head;
	if(count == 0) {
		cout << "List is empty" << endl;
		assert(false);
	} else {
		while(temp != nullptr) {
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
}

template<typename T>
int List<T>::size() const {
	return count;
}

#endif