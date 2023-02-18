#include <iostream>

using namespace std;

void bubbleSort(int numOfElements, int array[], bool (*compareNumbers)(int, int))
{
	bool wasElementSorted;
	do {
		wasElementSorted = true;
		//example: 5 2 9 6 3 0
		for (int i = 0; i < numOfElements - 1; i++)
		{
			if ((*compareNumbers)(array[i], array[i + 1]))
			{
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				wasElementSorted = false;
			}
		}
	} while (!wasElementSorted);
}

bool ascendingSort(int x, int y)
{
	if (x > y)
	{
		return true;
	}
	return false;
}

bool descendingSort(int x, int y)
{
	if (x < y)
	{
		return true;
	}
	return false;
}