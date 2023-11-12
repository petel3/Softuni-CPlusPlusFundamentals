#include <iostream>

using namespace std;

void printLine(int n) {
	for (int c = 1; c <= n; c++)
	{
		cout << c << " ";
	}
	cout << endl;
}

int main()
{
    int n;
    cin >> n;
	for(int r = 1; r <= n; r++)
	{
		printLine(r);
	}
	for (int r = n - 1; r >= 1; r--) {
		printLine(r);
	}
	return 0;
}
