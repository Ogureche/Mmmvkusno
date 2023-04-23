#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
template<typename T>
void sortArray(vector<T>& arr)
{
    sort(arr.begin(), arr.end());
}

template<>
void sortArray<string>(vector<string>& arr)
{
    sort(arr.begin(), arr.end(), [](const string& a, const string& b)
	{
        return a < b;
    });
}

int main()
{
    vector<int> arr1 = {5, 3, 9, 1, 0, 3, 8, 2, 7, 6, 1, 5, 5};
    sortArray(arr1);
    for (int x : arr1) 
	{
        cout << x << " ";
    }
    cout << endl;

    vector<double> arr2 = {3.14, 2.71, 1.41, 1.62, 1.23};
    sortArray(arr2);
    for (double x : arr2) 
	{
        cout << x << " ";
    }
    cout << endl;

    vector<string> arr3 = {"Alice", "Bob", "Charlie", "Dave", "Eve"};
    sortArray(arr3);
    for (const string& s : arr3) 
	{
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
