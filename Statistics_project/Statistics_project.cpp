#include <iostream>

using namespace std;

int main()
{
	// Write programs that read a sequence of integer inputs and print:
	// a. maximum & minimum
	// b. mean & median & range & standard deviation & variance & mode

	int input;
	int largest, smallest;
	double sum = 0;

	int size;
	cout << "Enter the size of the sequence: ";
	cin >> size;
	cout << "(Enter the numbers in an ascending order)" << endl;

	int i = 1;
	int last_input = 0;
	while (i <= size)
	{
		do
		{
			cout << "Enter the #" << i << " number: ";
			cin >> input;


		} while (input < last_input || input < 0); // we didn't use <= becase there is no problem in sroting if the 2 numbers are the same

		last_input = input;

		if (i == 1)
		{
			largest = input;
			smallest = input;
		}

		// calculate the largest and smallest to calculate the range
		if (input < smallest)
		{
			smallest = input;
		}
		if (input > largest)
		{
			largest = input;
		}

		i++;
	}
	cout << endl;
	cout << "The largest number is: " << largest << endl;
	cout << "The smallest number is: " << smallest << endl;


	return 0;
}