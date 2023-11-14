#include <iostream>
#include <iomanip>

using namespace std;

double factiorialResult(int n1) {
	double result = 1;
	for (int i = 2; i <= n1; i++)
	{
		result *= i;
	}
	return result;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
	double f1 = factiorialResult(n1);
	double f2 = factiorialResult(n2);

	cout << fixed << setprecision(2) << f1 / f2 << endl;
}
