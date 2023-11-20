#include "MaxHeap.h"

//************************** Constructor **********************//
// Default constructor
template <class T>
MaxHeap<T>::MaxHeap()
{
	make_heap(Heap.begin(), Heap.end());
}

template<class T>
MaxHeap<T>::MaxHeap(const vector<T>& array) : Heap(array)
{
	make_heap(Heap.begin(), Heap.end());
}

//************************** Public Functions **********************//

//Precondition: NA
//Postcondition: return the size of the heap
template <class T>
int MaxHeap<T>::getSize()
{
	return Heap.size();
}

//Precondition: NA
//Postcondition: return true if the heap is empty otherwise false
template <class T>
bool MaxHeap<T>::checkEmpty()
{
	return Heap.empty();
}

//Precondition: NA
//Postcondition: return the front element of the heap
template <class T>
T MaxHeap<T>::getFront()
{
	return Heap.front();
}

//Precondition: the heap has to be not empty
//Postcondition: pop the front element of the heap
template <class T>
void MaxHeap<T>::popHeap()
{
	pop_heap(Heap.begin(), Heap.end());
	Heap.pop_back();
}

//Precondition: NA
//Postcondition: insert an element to the heap
template <class T>
void MaxHeap<T>::pushHeap(T value)
{
	bool check = false;
	T temp;

	do
	{
		for (int j = 0; j < Heap.size(); j++)
		{
			if (Heap[j] == value)
			{
				check = true;
				temp = Heap[j];
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

			value = inputInteger("\n\t\t\tEnter an integer element to push onto the heap: ");
		}

	} while (check == true);
	Heap.push_back(value);
	push_heap(Heap.begin(), Heap.end());
}
	
//Precondition: the heap has to be not empty
//Postcondition: display the heap
template <class T>
void MaxHeap<T>::display()
{
	cout << "\n\t\t\tThe Heap: ";
	for (int i = 0; i < Heap.size(); i++)
	{
		cout << Heap[i] << " ";
	}
	cout << "\n";
}

//Precondition: looking for the item in the max heap
//Postcondition: returns the item in the heap now
template <class T>
bool MaxHeap<T>::search(const T& Item)
{
	for (int i = 0; i < Heap.size(); i++)
	{
		if (Heap[i] == Item)
		{
			return true;
		}
	}

	return false;
}
//Precondition: calling the obj of the class
//Postcondition: returns if its less than
template <class T>
bool MaxHeap<T>::operator<(MaxHeap<T> obj)
{
	return Heap.size() < obj.getSize();
}