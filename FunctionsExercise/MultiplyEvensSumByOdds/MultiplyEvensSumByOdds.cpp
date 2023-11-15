#include <iostream>

using namespace std;

long multiplyEvenByOddNumbers(int number) {
	int counter = 0;
	unsigned oddNumber = 0, evenNumber = 0;
	while (number)
	{
		counter++;
		

		int num=number % 10;
		if (number % 2)
		{
			evenNumber += num;
			
		}
		else
		{
			oddNumber += num;
		}
		number=number / 10;
	}
	return evenNumber * oddNumber;
}

int main()
{
    int number;
    cin >> number;
	cout << multiplyEvenByOddNumbers(number) << endl;
}