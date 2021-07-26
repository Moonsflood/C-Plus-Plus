#include <iostream>
#include<ctime>
#include<cstdlib>
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
int random();

int main()
{
    double average;
    int total,
        rowTotal,
        columnTotal,
        rowHigh,
        rowLow,
        randResult;

    int fives[ROWS][COLUMNS]= {{1, 1, 1, 1, 1},
                              {2, 4, 8, 16, 32},
                              {3, 9, 27, 81, 243},
                              {4, 16, 64, 256, 1024},
                              {5, 25, 125, 625, 3125}};


    cout << "The total of the array is: "
         << getTotal(fives);
    cout << "\n\nThe average of all values is: "
         << fixed << showpoint << setprecision(2)
         << getAverage(fives);
    randResult = random();
    cout << "\n\nThe sum of row # " << (randResult +1) << " is: "
         << getRowTotal(fives, randResult);
    randResult = random();
    cout << "\n\nThe sum of column # " << (randResult +1) << " is: "
         << getColumnTotal(fives, randResult);
    randResult = random();
    cout << "\n\nThe high number in row # " << (randResult +1) << " is: "
         << getHighestInRow(fives, randResult);
    randResult = random();
    cout << "\n\nThe low number in row # " << (randResult +1) << " is: "
         << getLowestInRow(fives, randResult);

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
int random()
{
    unsigned seed = time(0);
    srand(seed);
    return 0 + rand() % 4;
}

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
