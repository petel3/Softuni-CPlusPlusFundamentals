#include <iostream>
#include <cmath>

using namespace std;

int calculateMathPower(int n, int power);

int main()
{
    int number, power;
    cin >> number >> power;
    cout << calculateMathPower( number, power) << endl;
}

int calculateMathPower(int n, int power) {
    return pow(n, power);
}