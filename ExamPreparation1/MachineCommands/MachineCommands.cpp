#include <iostream>
#include <sstream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    list<int> numbers;
    string commands;

    while (cin >> commands)
    {

        istringstream istr(commands);
        int number;

        if (istr >> number)
        {
            numbers.push_back(number);
        }
        else if (commands == "end")
        {
            break;
        }
        else if (commands == "discard")
        {
            numbers.pop_back();
        }
        else
        {
            int a = numbers.back();
            numbers.pop_back();
            int b = numbers.back();
            numbers.pop_back();
            if (commands == "subtract")
            {
                numbers.push_back(a - b);
            }
            else if (commands == "sum")
            {
                numbers.push_back(a + b);
            }
            else if (commands == "concat")
            {
                ostringstream ostr;
                ostr << b << a;
                istringstream istr(ostr.str());
                istr >> number;
                numbers.push_back(number);
            }
        }
    }
    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << endl;
    }
}