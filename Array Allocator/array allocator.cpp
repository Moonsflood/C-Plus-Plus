// Aysel Kilicaslan
// Array Allocator

#include <iostream>

using namespace std;

int *getArray(int num);

int main()
{
	int elem;
	int *array;

	cout << "Please enter the number of elements in the array: " << endl;
	cout << " " << endl;
	cin >> elem;

	array = getArray(elem);

	for (int i = 0; i < elem; ++i)
	{
		cout << array[i] << endl;
	}

	delete[] array;

	return 0;
}

int *getArray(int num)
{
	int *array = NULL;
	int count, *ptr = array;

	array = new int[num];

	cout << " Please enter the intergers to be placed in the array below" << endl;

	for (count = 0; count < num; count++)
	{
		cout << " Interger number  " << (count + 1) << " : ";
		cout << " " << endl;
		cin >> array[count];
		cout << " " << endl;
	}
	ptr = array;

	return ptr;
}
