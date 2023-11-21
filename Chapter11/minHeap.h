#pragma once
#include<iostream>
#include<vector>
using namespace std;

//input (2) header files inputs validation
int inputInteger(string prompt);

//Precondition: going to create a min heap template class
//Postcondition: going to then create a vector that will hold my data that is a heap
template<class Item>
class MinHeap
{
private:
	vector<Item> heap;
public:
	MinHeap();
	MinHeap(const vector<Item>& array);
	int sizeHeap();
	bool emptyHeap();
	void pushMinHeap(Item entry);
	Item frontHeap();
	void popMinHeap();
	void displayHeap();
	bool search(const Item& value);

	bool operator<(MinHeap<Item> obj);
};