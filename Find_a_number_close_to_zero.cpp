#include <iostream>
using namespace std;
void showArray (int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int arrayMin(int *arr, const int size)
{
	int min = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
int arrayMax(int* arr, const int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int main()
{
	int array[]{ -45, -16, 31, 0, 2, -8, 8, 5, -6, -3};
	int positive = 0;
	int negative = 0;
	const int size = sizeof(array) / sizeof(array[0]);
	for (int i = 0; i < size; i++)
	{
		if (array[i] >= 0)
		{
			positive++;
		}
		else
		{
			negative++;
		}
	}
	/*cout << positive << endl;
	cout << negative << endl;*/
	int* arrayPos = new int[positive];
	int* arrayNeg = new int[negative];
	for (int j = 0; j < negative; j++)
	{
		for (int i = 0; i < size; i++)
		{
			if (array[i] < 0)
			{
				arrayNeg[j] = array[i];
				j++;
			}
			
		}
	}
	for (int j = 0; j < positive; j++)
	{
		for (int i = 0; i < size; i++)
		{
			if (array[i] >= 0)
			{
				arrayPos[j] = array[i];
				j++;
			}
			
		}
	}
	cout << "The given numbers are: " << endl;
	showArray(array, size);
	cout << "The positve numbers are: " << endl;
	showArray(arrayNeg, negative);
	cout << "The negative numbers are: " << endl;
	showArray(arrayPos, positive);
	int minP = arrayMin(arrayPos, positive);
	int maxN = arrayMax(arrayNeg, negative);
	/*cout << maxN << endl;
	cout<< minP <<endl;*/
	cout << "The closest number to 0 is: " << endl;
	if (abs(maxN) < minP)
	{
		cout << maxN << endl;
	}
	else if (abs(maxN) == minP)
	{
		cout << minP << endl;
	}
	else if (minP == 0)
		cout << minP << endl;
	else
	{
		cout << minP << endl;
	}



	delete[] arrayPos;
	delete[] arrayNeg;
	arrayPos = nullptr;
	arrayNeg = nullptr;

	
}
	