#include <iostream>

using namespace std;

void signOfIntegers(int number);

int main()
{
    int number;
    cin >> number;
	signOfIntegers(number);
}

void signOfIntegers(int number) {
	if (number>0)
	{
		cout << "The number " << number << " is positive.";
	}
	else if (number<0)
	{
		cout << "The number " << number << " is negative.";
	}
	else if (number==0)
	{
		cout << "The number " << number << " is zero.";
	}
}
