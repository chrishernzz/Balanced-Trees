#include "minHeap.h"

template<class Item>
minHeap<Item>::minHeap()
{
	make_heap(heap.begin(), heap.end(), greater<Item>());
}

template<class Item>
minHeap<Item>::minHeap(const vector<Item>& array) : heap(array)
{
	make_heap(heap.begin(), heap.end(), greater<Item>());
}

template<class Item>
int minHeap<Item>::sizeHeap()
{
	return heap.size();
}

template<class Item>
bool minHeap<Item>::emptyHeap()
{
	return heap.empty();
}

template<class Item>
void minHeap<Item>::pushMinHeap(Item entry)
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

template<class Item>
Item minHeap<Item>::frontHeap()
{
	return heap.front();
}

template<class Item>
void minHeap<Item>::popMinHeap()
{
	pop_heap(heap.begin(), heap.end(), greater<Item>());
	heap.pop_back();
}

template<class Item>
void minHeap<Item>::displayHeap()
{
	cout << "\n\t\t\tThe Heap: ";
	for (int i = 0; i < heap.size(); i++)
	{
		cout << heap[i] << " ";
	}

	cout << endl;
}

template <class Item>
bool minHeap<Item>::search(const Item& value)
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

template <class Item>
bool minHeap<Item>::operator<(minHeap<Item> obj)
{
	return heap.size() < obj.sizeHeap();
}
