#include <iostream>

using namespace std;

int addition(int n1, int n2) {
    return n1 + n2;
}
int subtraction(int n1, int n2) {
    return n1 - n2;
}

int multiplication(int n1, int n2) {
    return n1 * n2;
}

int division(int n1, int n2) {
    return n1 / n2;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    char operation;
    cin >> operation;
    if (operation=='+')
    {
        cout << addition(num1, num2) << endl;
    }
    else if (operation=='-')
    {
        cout << subtraction(num1, num2) << endl;
    }
    else if (operation=='*')
    {
        cout << multiplication(num1, num2) << endl;
    }
    else if (operation == '/')
    {
        cout << division(num1, num2) << endl;
    }

}
