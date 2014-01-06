#include <iostream>

using namespace std;

const int Max = 5;

// function prototypes
double * fill_array(double *first, double *last);
void show_array(const double *first, const double *last);
void revalue(double *first, double *last, double factor);

int main()
{
	double properties[Max];
	double * last;

	last = fill_array(properties, properties+Max);
	show_array(properties, last);

	cout << "Enter revaluation factor: ";
	double factor;
	cin >> factor;

	revalue(properties, last, factor);
	show_array(properties, last);
	cout << "Done.\n";

	return 0;
}

double *fill_array(double *first, double *last)
{
	double temp;
	double *pt;
	int i=0;
	for (pt = first; pt != last; pt++, i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin) // bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0) // signal to terminate
			break;
		*pt = temp;
	}
	return pt;
}

void show_array(const double *first, const double *last)
{
	const double *pt;
	int i=0;
	for (pt = first; pt != last; pt++, i++)
	{
		cout << "Property #" << (i + 1) << ": $ \n";
		cout << *pt;
	}
}

void revalue(double *first, double *last, double factor)
{
	double *pt;
	for (pt = first; pt != last; pt++)
		*pt *= factor;
}
