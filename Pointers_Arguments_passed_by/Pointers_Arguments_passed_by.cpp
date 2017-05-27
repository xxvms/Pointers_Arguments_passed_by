// Pointers_Arguments_passed_by.cpp : Defines the entry point for the console application.
//

#include <iostream>



int main()
{
	void centimize(double*);		// prototype

	double var = 10.0;				// var has value of 10
	std::cout << "var= " << var << " inches" << std::endl;
	
	centimize(&var);				//changes var to centimeters

	std::cout << "var= " << var << " centimeters" << std::endl;

	system("pause");
    return 0;
}
void centimize(double* ptrd)
{
	*ptrd *= 2.54;				// *ptrd is the same as var
}
