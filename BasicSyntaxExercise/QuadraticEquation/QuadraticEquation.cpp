#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;
    if (discriminant<0)
    {
        cout << "no roots" << endl;
        return 0;
    }
    discriminant = sqrt(discriminant);

    double r1 = ( - b + discriminant) / (2 * a);
    double r2 = ( - b - discriminant) / (2 * a);

    if (discriminant==0)
    {
        cout << r1;
        return 0;
    }
    else
    {
        cout << r1 << ' ' << r2 << endl;
    }
    
    return 0;
}
