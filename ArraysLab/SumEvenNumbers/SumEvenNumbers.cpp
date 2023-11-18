#include <iostream>

using namespace std;

int main()
{
	int actualSize;
	cin >> actualSize;

	int arr[actualSize];

	for (int i = 0; i < actualSize; i++)

	{
		cin >> arr[i];
	}
	int sum = 0;
	for (int number : arr)
	{
		if ((number % 2) == 0)
		{
			sum += number;
		}
	}
	cout << sum << endl;

	return 0;

}