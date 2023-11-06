#include <iostream>

using namespace std;

int main()
{
    int n1, n2,gdc=0,finalNum=0;
    cin >> n1 >> n2;

	if (n1>n2)
	{
		finalNum = n1;
	}
	else
	{
		finalNum = n2;
	}
	for (int i = 1; i <= finalNum; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			gdc = i;
		}
	}
	cout << gdc;
}
