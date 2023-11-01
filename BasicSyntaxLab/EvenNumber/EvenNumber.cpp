#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
	while (cin>>num && num%2!=0)
	{
		cout << "Please write an even number." << endl;
	}
	cout <<"The number is: " << abs(num) << endl;
}
