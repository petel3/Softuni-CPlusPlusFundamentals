#include <iostream>

using namespace std;

int getMinNumber(int a, int b) {
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int getMinNumber(int a, int b, int c) {
	return getMinNumber(a, getMinNumber(b, c));
}

int main()
{
    int a,b,c;
    cin >> a >>b >>c;
	cout << getMinNumber(a, b, c) << endl;
}


