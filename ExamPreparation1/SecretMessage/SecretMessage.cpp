#include <iostream>
#include <sstream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    string input;
    getline(cin,input);
    int result=0;
    for (int i = 0; i <input.size(); i++)
    {
        char curChar=input[i];
        if(isdigit(curChar)){
            curChar=curChar - '0';
            result+=curChar;
        }
    }
    
    if(result<=122 && result>=65)
        cout<<char(result);
    else
        cout<<result;
}