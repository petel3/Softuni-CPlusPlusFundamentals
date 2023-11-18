#include <iostream>

using namespace std;

void productOrders(string product, int quantity) {
    cout.setf(ios::fixed);
    cout.precision(2);
    if (product=="coffee")
    {
        cout << quantity * 1.50;
    }
    else if (product=="water")
    {
        cout << quantity*1.00;
    }
    else if (product=="coke")
    {
        cout << quantity * 1.40;
    }
    else if (product=="snacks")
    {
        cout << quantity * 2.0;
    }
}

int main()
{
    string product;
    int quantity;
    cin >> product>>quantity;
    productOrders(product, quantity);
}
