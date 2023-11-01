#include <iostream>

using namespace std;

int main()
{
    string name;
    int age;
    double grade;
    cin >> name >> age >> grade;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Name: " << name << ", Age: "<<age<<", Grade: " << grade << endl;
}
