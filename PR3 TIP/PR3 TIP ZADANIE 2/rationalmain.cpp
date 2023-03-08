#include <iostream>
#include "rational.h"

using namespace std;

int main()
{	
	int size;
	cout << "Enter the size of the array -> "; cin >> size;
	cout << "\n";
	rational* arr = new rational[size];
	int a, b;

	cout << "Enter the numerator and denominator separated by a space\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the number of the numerator and denominator of the fraction" << i + 1 << " : "; cin >> a >> b;
		(arr[i]).set(a,b);
	}
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << "\nfraction number " << i + 1 << " : ";
		(arr[i]).show();
	}
	cout << "\n";

	delete[] arr;

	return 0;
}