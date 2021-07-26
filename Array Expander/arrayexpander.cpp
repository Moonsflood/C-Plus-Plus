// Write a function that accepts an int array and the array's size as arguments. The function
// should create new array that is twice the size of the arguments array. The function
// should copy the contents of the arguments array to the new array, and initialize
// the unused elements of the array with 0. The function should return a pointer to the new array

// Aysel Kilicaslan
// Array expander
// 11/11/15

#include<iostream>

using namespace std;


int* myFunc (int, int*);

int main()
{
	
	int arrSize;
	int *myArr;
	int *newArr;
	
	cout << "*********************************************" << endl;
	cout << "Please enter array size ";
	cin >> arrSize;
	cout << " " << endl;
	
	cout << "This is the expanded array: " << arrSize << endl;
	
	myArr = new int[arrSize];
	cout << "*********************************************" << endl;
	
	for( int index = 0; index < arrSize; index++) 
		myArr [index] = index;
	newArr = myFunc(arrSize, myArr);
	
	for(int index = 0; index < arrSize*2; index++)
		cout << newArr[index] << ",";
	cout << " " << endl;
	cout << "*********************************************" << endl;	
		
	system("pause");
	return 0;
	
	
}


int* myFunc (int arrSize, int * myArr)
{
	
	
	int *newArr;
	
	newArr = new int[2*arrSize];
	
	
	for(int index = 0; index < arrSize; index++)
		newArr [index] = myArr [index];
		
		
	for (int index = arrSize; index < 2* arrSize; index++ )
		newArr [index] = 0;
	
	
	return newArr;
	
	
}


