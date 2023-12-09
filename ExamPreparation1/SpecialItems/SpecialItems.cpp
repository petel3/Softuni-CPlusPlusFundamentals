#include <iostream>
#include <sstream>
#include <list>
#include <vector>

using namespace std;

bool isValid(char curChar)
{
    if (curChar == 'a' || curChar == 'e' || curChar == 'i' || curChar == 'o' || curChar == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string input;
    getline(cin, input);

    ostringstream ostr;

    char previousChar = 0;

    for (int i = 0; i < input.size(); i++)
    {
        char curChar = input[i];
        if (isValid(curChar))
        {
            ostr << curChar;
            previousChar = curChar;
        }
        else if (previousChar != curChar)
        {
            ostr << curChar;
            previousChar = curChar;
        }
    }

    cout<<ostr.str()<<endl;
}