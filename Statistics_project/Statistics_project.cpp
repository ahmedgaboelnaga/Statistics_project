#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	// Write programs that read a sequence of integer inputs and print:
	// a. maximum & minimum
	// b. mean & median & range & standard deviation & variance & mode

	int size;
	do {
		cout << "Enter the number of items: " << endl;
		cin >> size;
	} while (size <= 0);

	double sum = 0;
	int* values = new int[size]; // dynamically allocate an array of integers of size 'size'
	// Read values and calculate the sum
	for (int i = 0; i < size; i++)
	{
		do
		{
			cout << "Enter the #" << i << " number: ";
			cin >> values[i];
		} while (values[i] < 0);

		// calculate the sum to calculate the mean
		sum += Values[i];
	}
	sort(values, values + size);

	int largest = values[size - 1];
	int smallest = values[0];

	double mean = sum / size;
	int range = largest - smallest;


	double variance_numerator = 0;
	for (int i = 0; i < size; i++)
	{
		variance_numerator += pow((values[i] - mean), 2);
	}
	double variance = variance_numerator / (size - 1);
	double standard_deviation = sqrt(variance);

	double median;
	if (size % 2 == 0)
	{
		median = (values[size / 2 - 1] + values[size / 2]) / 2.0;
	}
	else
	{
		median = values[size / 2];
	}

	int mode = 0;
	int max_count = 0;
	bool has_mode = false;

	for (int i = 0; i < size; i++)
	{
		int count = 0;
		for (int j = 0; j < size; j++)
		{
			if (values[j] == values[i])
			{
				count++;
			}
		}
		if (count > max_count)
		{
			max_count = count;
			mode = values[i];
			has_mode = true;
		}
	}

	// Print statistics
	cout << endl << endl;
	cout << "The largest number is: " << largest << endl;
	cout << "The smallest number is: " << smallest << endl << endl;
	cout << "The mean is: " << mean << endl << endl;
	cout << "The median is: " << median << endl;

	if (has_mode)
	{
		cout << "The mode is: " << mode << endl;
	}
	else
	{
		cout << "There is no mode." << endl;
	}

	cout << "The range is: " << range << endl;
	cout << "The standard deviation: " << standard_deviation << endl;
	cout << "The variance is:  " << variance << endl;

	delete[] values; // deallocate the dynamically allocated array

	return 0;
}