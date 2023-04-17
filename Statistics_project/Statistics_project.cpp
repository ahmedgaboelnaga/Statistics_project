#include <iostream>

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

	int first_median = 0, second_median = 0, odd_median = 0;
	int first_median_location = 0, second_median_location = 0, odd_median_location = 0;

	double even_median;

	if (size % 2 == 0)
	{
		first_median_location = size / 2;
		second_median_location = first_median_location + 1;
	}
	else
	{
		odd_median_location = (size / 2);
		odd_median_location += 1;
	}

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

		// calculate the middle number to calculate the median
		if (size % 2 == 0)
		{
			if (i == first_median_location)
			{
				first_median = input;
			}
			else if (i == second_median_location)
			{
				second_median = input;
			}
		}
		else
		{
			if (i == odd_median_location)
			{
				odd_median = input;
			}
		}

		i++;
	}
	cout << endl;
	cout << "The largest number is: " << largest << endl;
	cout << "The smallest number is: " << smallest << endl;

	double mean = sum / size;
	cout << endl << "The mean is: " << mean << endl << endl;

	int range = largest - smallest;
	cout << endl << "The range is: " << range << endl;

	if (size % 2 == 0)
	{
		even_median = (first_median + second_median) / 2.0;
		cout << "The median is: " << even_median << endl;
	}
	else
	{
		cout << "The median is: " << odd_median << endl;
	}

	return 0;
}