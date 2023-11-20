#pragma once
#include "MaxHeap.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

//input (1) header files inputs validation
int inputInteger(string prompt);

//precondition: going to create a class called max heap 
//postcondition: going to then create a template class and pass in a vector to keep track of our data (heap)
template <class T>
class MaxHeap {
private:
	vector <T> Heap;
public:

	// Constructor
	MaxHeap();
	MaxHeap(const vector<T>& array);

	// Public member functions
	int getSize();
	bool checkEmpty();
	T getFront();
	void popHeap();
	void pushHeap(T value);
	void display();
	bool search(const T& Item);

	bool operator<(MaxHeap<T> obj);
};

