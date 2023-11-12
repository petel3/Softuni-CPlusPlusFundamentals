#include <iostream>

using namespace std;

int calculateRectangleArea(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << calculateRectangleArea(a, b) << endl;
}

int calculateRectangleArea(int a, int b) {
    return a * b;
}