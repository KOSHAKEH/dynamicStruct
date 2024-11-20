#include <iostream>
#include "Queue.h"
#include "list.h"
using namespace std;

int main()
{
    list l;
    l.push_back("1");
    l.push_back("2");
    l.push_back("3");
    l.push_back("4");

    l.print();
    cout << (l.isEmpty() ? "empty " : "No empty") << endl;

    l.remove("2");
    l.print();


    return 0;
}

