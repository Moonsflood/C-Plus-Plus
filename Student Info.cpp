//Aysel kilicaslan
//assignment 2 

#include <iostream>

using namespace std;

struct student {
	char name[30];
	int idnum;
	double current;
	double prior;
	double overall;
};

int  main()
{
	student info;
	
	cout << " Enter Student Name: ";
	cin.get(info.name, 30);
	
	cout << " Enter Student Id Number: ";
    cin >> info.idnum;
    
    cout << " Enter Student's current exam grade: ";
    cin >> info.current;
    
    cout << " Enter Student's prior exam grade: ";
    cin >> info.prior;
    
    cout << " Enter Student's overall GPA: ";    
    cin >> info.overall;
    
    
    
    cout << "             ";	
	cout << "             ";
	
	
	
	    
    cout << " Displaying Information." << endl;
    
    cout << "          " << endl;
    
    cout << " Name: " << info.name << endl;
    cout <<" Age: " << info.idnum << endl;
    cout << " Current exam grade: " << info.current << endl;
	cout << " Prior exam grade: " << info.prior << endl;
	cout << " Overall grade: " << info.overall << endl;
    
	
	
}
