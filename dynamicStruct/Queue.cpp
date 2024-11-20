#include "Queue.h"
#include <iostream>
#include <string>
using namespace std;

void Queue::enqueue(string val) {
	nord* newNord = new nord{ val };
	if (end == nullptr) {
		front = end = newNord;
	}
	else {
		end->next = newNord;
		end = newNord;
	}
}
void Queue::dequeue() {
	if (front == nullptr) {
		return;
	}
	nord* temp = front;
	front = front->next;
	if (front == nullptr) {
		end = nullptr;
	}
	delete temp;
}
string Queue::peak() {
	if (!isEmpty()) {
		return front->val;
	}
	else {
		throw runtime_error("pysto");
	}
}
bool Queue::isEmpty() {
	return front == nullptr;
}
