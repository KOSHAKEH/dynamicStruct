#pragma once
#include <iostream>
#include <string>
using namespace std;

class nord
{
private:
	string val;
public:
	nord* next;
	nord(string val) : val(val), next(nullptr) {};
	friend class Queue;
	friend class list;
};

