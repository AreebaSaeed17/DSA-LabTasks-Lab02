// this is the program that uses dynamic memory allocation for an array to store salaries
#include <iostream>
using namespace std;

int main()
{
	const int size = 20;                // fixed array size
	int *salary = new int[size];        // array on heap using the ptr salary

    
	// Input salaries
	for (int i = 0; i < size; i++) {
		cout << "Enter Salary for employee " << (i + 1) << ": ";
		cin >> salary[i];

	}
	// Apply increment formula
	for (int i = 0; i < size; i++) {
		salary[i] = salary[i] + salary[i] / (i + 1);

	}
	// Display updated salaries
	cout << "\nUpdated Salaries: ";
	for (int i = 0; i < size; i++) {
		cout << salary[i] << " ";
	}

	// freeing memory
	delete[]salary;
}
