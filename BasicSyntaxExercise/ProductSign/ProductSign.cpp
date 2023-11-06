#include <iostream>

using namespace std;

int main()
{
    double n1, n2, n3,result=0;
    cin >> n1 >> n2 >> n3;

    result = n1 * n2 * n3;
    if (result<0)
    {
        cout << "-" << endl;
    }
    else
    {
        cout << "+" << endl;
    }
}
