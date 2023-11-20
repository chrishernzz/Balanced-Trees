#pragma once
#include<iostream>
#include<vector>
using namespace std;

//input (1) header files inputs validation
int inputInteger(string prompt);

//precondition: going to create a class called min heap 
//postcondition: going to then create a template class and pass in a vector to keep track of our data (heap)
template<class Item>
class minHeap {
private:
	vector<Item> heap;
public:
	minHeap();
	minHeap(const vector<Item>& array);
	int sizeHeap();
	bool emptyHeap();
	void pushMinHeap(Item entry);
	Item frontHeap();
	void popMinHeap();
	void displayHeap();
	bool search(const Item& value);

	bool operator<(minHeap<Item> obj);
};