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
	int evenSum = 0;
    int oddSum=0;
	for (int number : arr)
	{
		if ((number % 2) == 0)
		{
			evenSum += number;
		}
        else
        {
            oddSum+=number;
        }
	}
	
    cout<<evenSum-oddSum<<endl;
	return 0;

}