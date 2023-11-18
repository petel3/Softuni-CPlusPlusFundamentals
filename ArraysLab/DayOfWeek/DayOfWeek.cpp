#include <iostream>

using namespace std;

static const string DOW[] = {
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday"
};

int main()
{
    int dow;
    cin >> dow;
    if (dow < 1 || dow>7)
    {
        cout << "Invalid day!";
    }
    else
    {
        cout << DOW[dow - 1];
    }
}
