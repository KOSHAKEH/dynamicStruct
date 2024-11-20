#include "list.h"
#include <iostream>
#include <string>
using namespace std;

bool list::isEmpty() {
	return first == nullptr;
}
void list::push_back(string val) {
	nord* ptr = new nord(val);
	if (isEmpty()) {
		first = ptr;
		last = ptr;
		return;
	}
	last->next = ptr;
	last = ptr;
}
void list::print() {
	if(isEmpty()) return;
	nord* ptr = first;
	while (ptr) {
		cout << ptr->val << " ";
		ptr = ptr->next;
	}
	cout << endl;
}
void list::pop_back() {
	if (isEmpty()) {
		return;
	}
	if (first == last) {
		pop_front();
		return;
	}
	nord* ptr = first;
	while (ptr->next != last) {
		ptr = ptr->next;
	}
	ptr->next = nullptr;
	delete last;
	last = ptr;
}
void list::pop_front() {
	if(isEmpty()) return;
	nord* ptr = first;
	first = ptr->next;
	delete ptr;
}
void list::remove(string val) {
	if (isEmpty()) return;
	if (first->val == val) {
		pop_front(); return;
	}
	if (last->val == val) {
		pop_back(); return;
	}

	nord* slow = first;
	nord* fast = first->next;
	while (fast and fast->val != val) {
		fast = fast->next;
		slow = slow->next;
	}
	if (!fast) {
		cout << "element does not exist" << endl;
	}
	slow->next = fast->next;
	delete fast;
}
nord* list::find(string val) {
	nord* ptr = first;
	while(ptr and ptr->val != val){
		ptr = ptr->next;
	}
	return (ptr and ptr->val == val) ? ptr : nullptr;
}
nord* list::operator[](const int index) {
	if (isEmpty()) {
		return nullptr;
	}
	nord* ptr = first;
	for (auto i = 0; i < index; i++) {
		ptr = ptr->next;
		if (ptr) {
			return nullptr;
		}
	}
	return ptr;
}
