#include <iostream>
#include "rational.h"

using namespace std;

int main()
{	

	int size;
	cout << "Enter the number of fractions -> "; cin >> size;
	cout << "\n";
	rational* arr = new rational[size];
	int a, b;

	cout << "You need to enter numbers strictly separated by a space\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the number of the numerator and denominator of the fraction " << i + 1 << " : "; cin >> a >> b;
		(arr[i]).set(a, b);
	}
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << "\nFraction number " << i + 1 << " : ";
		(arr[i]).show();
	}
	cout << "\n";

	int i1, i2;

	cout << "\nSpecify the two fractions you want to add: "; cin >> i1 >> i2; i1 = i1 - 1; i2 = i2 - 1;
	cout << "\n"; (arr[i1]).show(); cout << " + "; (arr[i2]).show(); cout << " = ";
	((arr[i1]) + (arr[i2])).show();
	cout << "\n";

	cout << "\nSpecify two fractions, one of which you want to subtract from the other: "; cin >> i1 >> i2; i1 = i1 - 1; i2 = i2 - 1;
	cout << "\n"; (arr[i1]).show(); cout << " - "; (arr[i2]).show(); cout << " = ";
	((arr[i1]) - (arr[i2])).show();
	cout << "\n";

	cout << "\nSpecify the fraction to whose numerator you want to add one: "; cin >> i1; i1 = i1 - 1;
	cout << "\n"; (arr[i1]).show(); cout << "++";cout << " = ";
	rational xr = arr[i1];
	(++xr).show();
	cout << "\n";

	cout << "\nSpecify the two fractions that you want to check for equality: "; cin >> i1 >> i2; i1 = i1 - 1; i2 = i2 - 1;
	cout << "\n"; (arr[i1]).show(); cout << " == "; (arr[i2]).show();
	if (arr[i1] == arr[i2]) cout << "\nFractions are equal";
	else cout << "\nFractions are not equal";
	cout << "\n";

	cout << "\nSpecify the two fractions you want to compare: "; cin >> i1 >> i2; i1 = i1 - 1; i2 = i2 - 1;
	cout << "\n"; (arr[i1]).show(); cout << " > "; (arr[i2]).show();
	if (arr[i1] > arr[i2]) cout << "\nThe first fraction is larger";
	else cout << "\nThe second fraction is larger";
	cout << "\n";

	delete[] arr;

	return 0;
}