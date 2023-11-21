#include "minHeap.h"

//************************** Constructor **********************//
// Default constructor
template<class Item>
MinHeap<Item>::MinHeap()
{
	make_heap(heap.begin(), heap.end(), greater<Item>());
}

// Argument constructor
// Precondition: an non-empty array
// Postcondition: create a heap base on the array
template<class Item>
MinHeap<Item>::MinHeap(const vector<Item>& array) : heap(array)
{
	make_heap(heap.begin(), heap.end(), greater<Item>());
}

//************************** Public Functions **********************//
//Precondition: NA
//Postcondition: return the size of the heap
template<class Item>
int MinHeap<Item>::sizeHeap()
{
	return heap.size();
}

//Precondition: NA
//Postcondition: return true if the heap is empty otherwise false
template<class Item>
bool MinHeap<Item>::emptyHeap()
{
	return heap.empty();
}

//Precondition: NA
//Postcondition: insert an element to the heap
template<class Item>
void MinHeap<Item>::pushMinHeap(Item entry)
{
	bool check = false;
	Item temp;

	do
	{
		for (int k = 0; k < heap.size(); k++)
		{
			if (heap[k] == entry)
			{
				check = true;
				temp = heap[k];
				break;
			}
			else
			{
				check = false;
			}
		}
		
		if (check == true)
		{
			cout << "\t\t\nERROR: the element, " << temp << ", already existed in the heap.Please re - specify.";
			
			entry = inputInteger("\n\t\t\tEnter an integer element to push onto the heap: ");
		}
	
	} while (check == true);
	heap.push_back(entry);
	push_heap(heap.begin(), heap.end(), greater<Item>());
}

//Precondition: NA
//Postcondition: return the front element of the heap
template<class Item>
Item MinHeap<Item>::frontHeap()
{
	return heap.front();
}

//Precondition: the heap has to be not empty
//Postcondition: pop the front element of the heap
template<class Item>
void MinHeap<Item>::popMinHeap()
{
	pop_heap(heap.begin(), heap.end(), greater<Item>());
	heap.pop_back();
}

//Precondition: the heap has to be not empty
//Postcondition: display the heap
template<class Item>
void MinHeap<Item>::displayHeap()
{
	cout << "\n\t\t\tThe Heap: ";
	for (int i = 0; i < heap.size(); i++)
	{
		cout << heap[i] << " ";
	}

	cout << endl;
}

//Precondition: the heap has to be not empty
//Postcondition: return true if the value is find in the heap, otherwise return false
template <class Item>
bool MinHeap<Item>::search(const Item& value)
{
	for (int i = 0; i < heap.size(); i++)
	{
		if (heap[i] == value)
		{
			return true;
		}
	}

	return false;
}

//****************************** Overload Operator ****************************//
//Precondition: a MaxHeap object
//Postcondition: return true if this object is smaller than the parameter else return false
template <class Item>
bool MinHeap<Item>::operator<(MinHeap<Item> obj)
{
	return heap.size() < obj.sizeHeap();
}
