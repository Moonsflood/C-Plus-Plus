#include <iostream>
#include<iomanip>
using namespace std;

//Global constants
const int COLUMNS = 5;
const int ROWS = 5;

//function prototypes
int getTotal(const int [][COLUMNS]);
double getAverage(const int [][COLUMNS]);
int getRowTotal(const int [][COLUMNS], int);
int getColumnTotal(const int [][COLUMNS], int);
int getHighestInRow(const int [][COLUMNS], int);
int getLowestInRow(const int [][COLUMNS], int);


int main()
{
    double average;
    int total,
        rowTotal,
        columnTotal,
        rowHigh,
        rowLow,
        numbers,
        randResult;

    int nums[ROWS][COLUMNS]= {{1, 3, 5, 7, 9},
                              {2, 4, 6, 8, 10},
                              {11, 13, 15, 17, 19},
                              {12, 14, 16, 18, 20},
                              {21, 23, 25, 27, 29}};

	cout << " ********************************************** " << endl;
    cout << " The total of the array is: "
         << getTotal(nums);
    cout << " " << endl;
	cout << " ********************************************** " << endl;
	
	
    cout << " The average of all values is: "
         << fixed << showpoint << setprecision(2)
         << getAverage(nums);
    randResult = numbers;
    cout << " " << endl;
    cout << " ********************************************** " << endl;
    
    
    cout << " The sum of row # " << (randResult +1) << " is: "
         << getRowTotal(nums, randResult);
    randResult = numbers;
    cout << " " << endl;
    cout << " ********************************************** " << endl;
    
    
    cout << " The sum of column # " << (randResult +1) << " is: "
         << getColumnTotal(nums, randResult);
    randResult = numbers;
    cout << " " << endl;
    cout << " ********************************************** " << endl;
    
    cout << " The high number in row # " << (randResult +1) << " is: "
         << getHighestInRow(nums, randResult);
    randResult = numbers;
    cout << " " << endl;
    cout << " ********************************************** " << endl;
    
    
    cout << " The low number in row # " << (randResult +1) << " is: "
         << getLowestInRow(nums, randResult);
    cout << " " << endl;
    cout << " ********************************************** " << endl;

    return 0;
}

int getTotal(const int array[][COLUMNS])
{
    int total = 0;
    for(int row = 0; row < ROWS; row++)
    {
        for (int column = 0; column < COLUMNS; column++)
        {
            total += array[row][column];
        }
    }
return total;
}

double getAverage(const int array[][COLUMNS])
{
    int total = 0;
    double divisor = 0.00, avg = 0.00;
    for(int row = 0; row < ROWS; row++)
    {
        for (int column = 0; column < COLUMNS; column++)
            {
                total += array[row][column];
                divisor += 1;
            }
    }

avg = total / divisor;
return avg;
}

// function random


int getRowTotal(const int array[][COLUMNS], int row)
{
    int total = 0;
    for (int column = 0; column < COLUMNS; column++)
    {
        total += array[row][column];
    }
    return total;
}

int getColumnTotal(const int array[][COLUMNS], int column)
{
    int total = 0;
    for (int row = 0; row < ROWS; row++)
    {
        total += array[row][column];
    }
    return total;
}



    //
int getHighestInRow(const int array[][COLUMNS], int row)

    {
        int highNum = array[row][0];
        for (int column = 0; column < COLUMNS; column++)
        {
           if (highNum < array[row][column])
            {
                highNum = array[row][column];
            }

        }
    return highNum;
    }


    //
int getLowestInRow(const int array[][COLUMNS], int row)

    {
        int lowNum = array[row][0];
        for (int column = 0; column < COLUMNS; column++)
        {
           if (lowNum > array[row][column])
            {
                lowNum = array[row][column];
            }

        }
    return lowNum;
    }
