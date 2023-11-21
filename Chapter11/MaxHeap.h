#pragma once
#include "MaxHeap.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

//input (2) header files inputs validation
int inputInteger(string prompt);

//Precondition: going to create a max heap template class
//Postcondition: going to then create a vector that will hold my data that is a heap
template <class T>
class MaxHeap
{
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
	void sort();
	bool isHeap(const vector<T>& array);

	bool operator<(MaxHeap<T> obj);
};

