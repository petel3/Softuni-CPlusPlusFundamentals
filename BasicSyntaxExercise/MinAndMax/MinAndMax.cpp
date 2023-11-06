#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int n;
	int minNumber = INT_MAX;
	int maxNumber = INT_MIN;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int number;
		
		cin >> number;
		if (minNumber>number)
		{
			minNumber = number;
		}
		if (maxNumber < number)
		{
			maxNumber = number;
		}
	}
	cout << minNumber << " " << maxNumber;
}