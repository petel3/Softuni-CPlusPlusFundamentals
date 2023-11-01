#include <iostream>

using namespace std;

int main()
{
    int num,counter=0,sum=0;
    cin >> num;
	for (int i = 1; i <= 200; i+=2)
	{
		counter++;
		cout << i << endl;
		sum += i;
		if (counter==num)
		{
			break;
		}
	}
	cout << "Sum: " << sum << endl;
}
