//Name: Christian Hernandez
//Date: 11/20/2023
//subscription: CMPR131

//Credit: Christian Hernandez,Bryan Alarcon,Thanh Tran, Joe Bryant,Erik Santana, Saul Merino

#include<iostream>
#include<string>
#include"input (2).h"
#include"MinHeap.cpp"
#include"MaxHeap.cpp"
#include"Heap.cpp"
using namespace std;

//Prototypes
void Option1();
void Option2();
void Option3();
void Max_Heap();
void Min_Heap();

int main()
{
	MinHeap<int> min;
	do
	{
		cout << "\n\tCMPR131 Chapter 11: Heaps by Joe Bryant (11/20/23)\n";
		cout << "\t" << string(100, char(205)) << endl;
		cout << "\t\t1> Heap using vector\n";
		cout << "\t\t2> Union and intersect of heaps\n";
		cout << "\t\t3> Heap in C++ STL\n";
		cout << "\t" << string(100, char(196)) << endl;
		cout << "\t\t0> Exit\n";
		cout << "\t" << string(100, char(205)) << endl;

		switch (inputInteger("\t\tOption: ", 0, 3))
		{
		case 0:
		{
			exit(1);
		}
		break;
		case 1:
		{
            system("cls");
            Option1();
		}
		break;
		case 2:
		{
            system("cls");
            Option2();
		}
		break;
		case 3:
		{
            system("cls");
            Option3();
		}
		break;
		}
	} while (true);
	
	return 0;
}

//Precondition: NA
//Postcondition: Display Option 1 menu
void Option1()
{
    do
    {
        system("cls");
        cout << "\n\t\t1> Heap using vector";
        cout << "\n\t\t" + string(70, char(205));
        cout << "\n\t\t\tA> Min heap";
        cout << "\n\t\t\tB> Max heap";

        cout << "\n\t\t" + string(70, char(196));
        cout << "\n\t\t\t0> return";
        cout << "\n\t\t" + string(70, char(205));

        switch (toupper(inputChar("\n\t\t\tOption: ", static_cast<string>("AB0"))))
        {
        case '0': system("cls"); return;
        case 'A': system("cls"); Min_Heap(); break;
        case 'B': system("cls"); Max_Heap(); break;
        default: cout << "\t\t\tERROR - Invalid option."; break;
        }
        cout << "\n";
        system("pause");
    } while (true);
}

//Precondition: NA
//Postcondition: Display Option Max Heap Option
void Max_Heap()
{
    MaxHeap<int> heap;

    do
    {
        system("cls");
        cout << "\n\t\tB> Max Heap";
        cout << "\n\t\t" + string(70, char(205));
        cout << "\n\t\t\t1. size";
        cout << "\n\t\t\t2. empty";
        cout << "\n\t\t\t3. push";
        cout << "\n\t\t\t4. front";
        cout << "\n\t\t\t5. pop";
        cout << "\n\t\t\t6. display";

        cout << "\n\t\t" + string(70, char(196));
        cout << "\n\t\t\t0> return";
        cout << "\n\t\t" + string(70, char(205));

        switch (inputInteger("\n\t\t\tOption: ", 0, 6))
        {
        case 0: return;
        case 1:
        {
            cout << "\n\t\t\tSize of the heap: " << heap.getSize() << "\n";
        }
        break;

        case 2:
        {
            if (heap.checkEmpty())
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }
            else
            {
                cout << "\n\t\t\tThe heap is not empty.\n";
            }
        }
        break;

        case 3:
        {
            heap.pushHeap(inputInteger("\n\t\t\tEnter an integer element to push onto the heap: "));
        }
        break;

        case 4:
        {
            if (heap.checkEmpty())
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }
            else
            {
                cout << "\n\t\t\tThe first element of the heap: " << heap.getFront() << "\n";
            }
        }
        break;

        case 5:
        {
            if (heap.checkEmpty())
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }
            else
            {
                cout << "\n\t\t\tThe first element of the heap has been removed: " << heap.getFront() << "\n";
                heap.popHeap();
            }
        }
        break;

        case 6:
        {
            if (heap.checkEmpty())
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }
            else
            {
                heap.display();
            }
        }
        break;

        default: cout << "\t\t\tERROR - Invalid option."; break;
        }
        cout << "\n";
        system("pause");
    } while (true);
}

//Precondition: NA
//Postcondition: Display Option Min Heap Option
void Min_Heap()
{
    MinHeap<int> heap2;

    do
    {
        system("cls");
        cout << "\n\t\tA> Min Heap";
        cout << "\n\t\t" + string(70, char(205));
        cout << "\n\t\t\t1. size";
        cout << "\n\t\t\t2. empty";
        cout << "\n\t\t\t3. push";
        cout << "\n\t\t\t4. front";
        cout << "\n\t\t\t5. pop";
        cout << "\n\t\t\t6. display";

        cout << "\n\t\t" + string(70, char(196));
        cout << "\n\t\t\t0> return";
        cout << "\n\t\t" + string(70, char(205));

        switch (inputInteger("\n\t\t\tOption: ", 0, 6))
        {
        case 0: return;
        case 1:
        {
            cout << "\n\t\t\tSize of the heap: " << heap2.sizeHeap() << "\n";
        }
        break;

        case 2:
        {
            if (heap2.emptyHeap())
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }
            else
            {
                cout << "\n\t\t\tThe heap is not empty.\n";
            }
        }
        break;
          
        case 3:
        {
            heap2.pushMinHeap(inputInteger("\n\t\t\tEnter an integer element to push onto the heap: "));
        }
        break;

        case 4:
        {
            if (heap2.emptyHeap())
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }
            else
            {
                cout << "\n\t\t\tThe first element of the heap: " << heap2.frontHeap() << "\n";
            }
        }
        break;

        case 5:
        {
            if (heap2.emptyHeap())
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }
            else
            {
                cout << "\n\t\t\tThe first element of the heap has been removed: " << heap2.frontHeap() << "\n";
                heap2.popMinHeap();
            }
        }
        break;

        case 6:
        {
            if (heap2.emptyHeap())
            {
                cout << "\n\t\t\tThe heap is empty.\n";
            }
            else
            {
                heap2.displayHeap();
            }
        }
        break;

        default: cout << "\t\t\tERROR - Invalid option."; break;
        }
        cout << "\n";
        system("pause");
    } while (true);
}

//Precondition: NA
//Postcondition: Display Option 2 menu
void Option2()
{

    do
    {
        system("cls");
        cout << "\n\t\t2> Union and intersect heap";
        cout << "\n\t\t" + string(70, char(205));
        cout << "\n\t\t\tA> Union two max Heaps";
        cout << "\n\t\t\tB> Intersect two max Heaps";
        cout << "\n\t\t\tC> Union two min Heaps";
        cout << "\n\t\t\tD> Intersect two min Heaps";

        cout << "\n\t\t" + string(70, char(196));
        cout << "\n\t\t\t0> return";
        cout << "\n\t\t" + string(70, char(205));

        switch (toupper(inputChar("\n\t\t\tOption: ", static_cast<string>("ABCD0"))))
        {
        case '0': system("cls"); return;
        case 'A':
        {
            vector<int> array1 = { 12, 5, 6, 2 };
            vector<int> array2 = { 12, 9, 6 };

            MaxHeap<int> heap1(array1);
            MaxHeap<int> heap2(array2);

            if (heap2 < heap1)
            {
                MaxHeap<int> heapTemp(array2);
                MaxHeap<int> merge_max_heap(heap1);

                for (int i = 0; i < heapTemp.getSize(); i++)
                {
                    int temp = heapTemp.getFront();
                    if (heap1.search(temp) == false)
                    {
                        merge_max_heap.pushHeap(temp);
                    }
                    heapTemp.popHeap();
                }

                cout << "\n\t\t\tMax heap1: ";
                heap1.display();

                cout << "\n\t\t\tMax heap2: ";
                heap2.display();

                cout << "\n\t\t\tMerged max heap: ";
                merge_max_heap.display();
            }
        }
        break;

        case 'B':
        {
            vector<int> array1 = { 12, 5, 6, 2 };
            vector<int> array2 = { 12, 9, 6 };

            MaxHeap<int> heap1(array1);
            MaxHeap<int> heap2(array2);

            if (heap2 < heap1)
            {
                MaxHeap<int> heapTemp(array2);
                MaxHeap<int> intersect_heap;

                int size = heapTemp.getSize();

                for (int i = 0; i < size; i++)
                {
                    int temp = heapTemp.getFront();
                    if (heap1.search(temp))
                    {
                        intersect_heap.pushHeap(temp);
                    }
                    heapTemp.popHeap();
                }

                cout << "\n\t\t\tMax heap1: ";
                heap1.display();

                cout << "\n\t\t\tMax heap2: ";
                heap2.display();

                cout << "\n\t\t\tIntersect max heap: ";
                intersect_heap.display();
            }
        }
        break;

        case 'C':
        {
            vector<int> array1 = { 2 ,5, 6, 12 };
            vector<int> array2 = { 6, 12, 9 };

            MinHeap<int> heap1(array1);
            MinHeap<int> heap2(array2);

            if (heap2 < heap1)
            {
                MinHeap<int> heapTemp(array2);
                MinHeap<int> merge_min_heap(heap1);

                int size = heapTemp.sizeHeap();

                for (int i = 0; i < size; i++)
                {
                    int temp = heapTemp.frontHeap();
                    if (heap1.search(temp) == false)
                    {
                        merge_min_heap.pushMinHeap(temp);
                    }
                    heapTemp.popMinHeap();
                }

                cout << "\n\t\t\tMin heap1: ";
                heap1.displayHeap();

                cout << "\n\t\t\tMin heap2: ";
                heap2.displayHeap();

                cout << "\n\t\t\tMerged min heap: ";
                merge_min_heap.displayHeap();
            }

        }
        break;

        case 'D':
        {
            vector<int> array1 = { 2 ,5, 6, 12 };
            vector<int> array2 = { 6, 12, 9 };

            MinHeap<int> heap1(array1);
            MinHeap<int> heap2(array2);

            if (heap2 < heap1)
            {
                MinHeap<int> heapTemp(array2);
                MinHeap<int> intersect_heap;

                int size = heapTemp.sizeHeap();

                for (int i = 0; i < size; i++)
                {
                    int temp = heapTemp.frontHeap();
                    if (heap1.search(temp))
                    {
                        intersect_heap.pushMinHeap(temp);
                    }
                    heapTemp.popMinHeap();
                }

                cout << "\n\t\t\tMin heap1: ";
                heap1.displayHeap();

                cout << "\n\t\t\tMin heap2: ";
                heap2.displayHeap();

                cout << "\n\t\t\tIntersect min heap: ";
                intersect_heap.displayHeap();
            }
        }
        break;
        default: cout << "\n\t\t\tERROR - Invalid option.\n"; break;
        }
        cout << "\n";
        system("pause");
    } while (true);
}

//Precondition: NA
//Postcondition: Display Option 3 menu
void Option3()
{
    Heap<int> temp;

    temp.menu();
}
