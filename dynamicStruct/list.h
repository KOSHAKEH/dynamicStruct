#pragma once
#include "nord.h"
class list
{
	nord* first;
	nord* last;
public:
	list(): first(nullptr), last(first) {}
	bool isEmpty();
	void push_back(string val);
	void print();
	void pop_back();
	void pop_front();
	void remove(string val);
	nord* find(string val);
	nord* operator[](const int val);
};

