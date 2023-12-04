#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void readInts(istream &istr, vector<int> &dest)
{
    int i;
    while (istr >> i)
    {
        dest.push_back(i);
    }
}

int main()
{
    string str;
    getline(cin, str);

    istringstream input(str);
    vector<int> numbers;
    readInts(input, numbers);

    vector<int>::iterator itV;
    for (itV = numbers.begin(); itV != numbers.end();)

        if (*itV < 0)
        {
            itV = numbers.erase(itV);
        }
        else
        {
            itV++;
        }

    if (numbers.size())
    {
        for (itV = numbers.end() - 1;; itV--)
        {

            cout << *itV << ' ';
            if (itV == numbers.begin())
            {
                break;
            }
        }
    }
    else
    {
        cout << "empty" << endl;
    }
}
