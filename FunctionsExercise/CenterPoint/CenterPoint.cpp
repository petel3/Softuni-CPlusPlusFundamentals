#include <iostream>

using namespace std;

void printPoint(double x, double y) {
    cout << '(' << x << ", " << y << ')' << endl;
}

double calculateDistance(double x, double y) {
    return x * x + y * y;
}

void calculateCenterPoint(double x1, double y1, double x2, double y2) {
    double dx1 = calculateDistance(x1,y1);
    double dx2 = calculateDistance(x2,y2);
    if (dx1<=dx2)
    {
        printPoint(x1, y1);
    }
    else
    {
        printPoint(x2, y2);
    }
}

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    calculateCenterPoint(x1, y1, x2, y2);
}