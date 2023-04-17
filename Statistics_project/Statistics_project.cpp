#include <iostream>
#include <algorithm>


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


	int largest = 0, smallest = 0;
	double sum = 0;

	int i = 1;
	int values[size]; // wrong because we must put a constant like values[5] or make a dynamic memory allocation
	while (i <= size)
	{
		do
		{
			cout << "Enter the #" << i << " number: ";
			cin >> Values[i];
		} while (values[i] < 0);

		if (i == 1)
		{
			largest = Values[i];
			smallest = Values[i];
		}

		// calculate the largest and smallest to calculate the range
		if (Values[i] < smallest)
		{
			smallest = Values[i];
		}
		if (Values[i] > largest)
		{
			largest = Values[i];
		}

		// calculate the sum to calculate the mean
		sum += Values[i];

		i++;
	}
	sort(values, values + size);

	double median;
	if (size % 2 == 0)
	{
		median = (values[size / 2 - 1] + values[size / 2]) / 2.0;
	}
	else
	{
		median = values[size / 2];
	}

	double variance_numerator = 0;
	for (int i = 0; i < size; i++)
	{
		variance_numerator += pow((values[i] - mean), 2);
	}
	double variance = variance_numerator / (size - 1);
	double standard_deviation = sqrt(variance);

	cout << endl << endl;
	cout << "The largest number is: " << largest << endl;
	cout << "The smallest number is: " << smallest << endl;

	double mean = sum / size;
	cout << endl << "The mean is: " << mean << endl << endl;

	int range = largest - smallest;
	cout << endl << "The range is: " << range << endl;

	cout << "The standard deviation: " << standard_deviation << endl;
	cout << "The variance is:  " << variance << endl;

	return 0;
}