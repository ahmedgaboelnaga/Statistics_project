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

	// Read values and calculate the sum
	double sum = 0;
	int* values = new int[size]; // dynamically allocate an array of integers of size 'size'
	for (int i = 0; i < size; i++)
	{
		do
		{
			cout << "Enter the #" << i + 1 << " number: ";
			cin >> values[i];
		} while (values[i] < 0);

		sum += values[i];
	}
	// Calculate statistics
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

	// calculate mode
	int max_count = 0;
	int mode_count = 0;
	int* modes = new int[size]; // dynamically allocate an array to store the modes
	for (int i = 0; i < size; i++) {
		int count = 0;
		for (int j = 0; j < size; j++) {
			if (values[j] == values[i]) {
				count++;
			}
		}
		if (count > max_count) {
			max_count = count;
			mode_count = 1;
			modes[0] = values[i];
		}
		else if (count == max_count) {
			modes[mode_count] = values[i];
			mode_count++;
		}
	}

	// Print statistics
	cout << endl << endl;
	cout << "The largest number is: " << largest << endl;
	cout << "The smallest number is: " << smallest << endl;
	cout << "The mean is: " << mean << endl;
	cout << "The median is: " << median << endl;

	if (max_count > 1) {
		cout << "The mode is: ";
		for (int i = 0; i < mode_count; i++) {
			if (i > 0 && modes[i] == modes[i - 1]) {
				continue; // avoid printing duplicate values
			}
			cout << modes[i] << " ";
		}
		cout << endl;
	}
	else {
		cout << "There is no mode." << endl;
	}

	cout << "The range is: " << range << endl;
	cout << "The standard deviation: " << standard_deviation << endl;
	cout << "The variance is:  " << variance << endl;

	delete[] values; // deallocate the dynamically allocated array

	return 0;
}