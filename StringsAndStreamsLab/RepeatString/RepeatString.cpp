#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin,input);
    istringstream istr(input);

    ostringstream result;
    string str;
    while (istr>>str)
    {
        int count=str.length();
        while (count--)
        {
           result<<str;
        }
        
    }
    cout<<result.str();
    
}