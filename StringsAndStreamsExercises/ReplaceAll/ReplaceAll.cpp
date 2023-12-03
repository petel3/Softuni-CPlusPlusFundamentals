#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin,input);

    string strFind;
    getline(cin,strFind);

    string strReplace;
    getline(cin,strReplace);

    int foundIndex=input.find(strFind);
    while (foundIndex!=string::npos)
    {
       input.replace(foundIndex,strFind.length(),strReplace);
       foundIndex=input.find(strFind);
    }

    cout<<input<<endl;
    
}