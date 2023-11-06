#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int digit = n;
    while (digit!=0)
    {
        int curDigit = digit % 10;
        int digitFactorial = 1;
        
        for (int i = 2; i <= curDigit; i++)
        {
            digitFactorial *= i;
        }
        sum += digitFactorial;
        digit = digit / 10;
    }
    if (n==sum)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}
