#pragma once
#include"nord.h"
#include <iostream>
#include <string>
using namespace std;

class Queue
{
	nord* front, * end;

public:
	Queue() :front(nullptr), end(front) {};
	void enqueue(string val);
	void dequeue();
	string peak();
	bool isEmpty();

};

