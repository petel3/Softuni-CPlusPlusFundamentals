#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int currentValue = 0, previousValue = 0;
    string input;
    getline(cin, input);
    istringstream istr(input);

    string token;

    vector<string> tokens;

    while (istr >> token)
    {
        tokens.push_back(token);
    }
    int tempVal = 0;
    for (vector<string>::iterator it = tokens.begin(); it != tokens.end(); it++)
    {
        if (*it != "/" && *it != "-" && *it != "*" && *it != "+")
        {
            tempVal = stoi(*it);

            previousValue = currentValue;
            currentValue = tempVal;
        }
        else
        {
            if (*it == "/")
            {
                currentValue =  previousValue/ currentValue;
                previousValue = tempVal;
            }
            else if (*it == "-")
            {
                currentValue = abs(currentValue - previousValue);
                previousValue = tempVal;
            }
            else if (*it == "+")
            {
                currentValue = currentValue + previousValue;
                previousValue = tempVal;
            }
            else if (*it == "*")
            {
                currentValue = currentValue * previousValue;
                previousValue = tempVal;
            }
        }
    }
    cout << currentValue << ' ' << previousValue;
}