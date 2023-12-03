#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool validExpression(istream & expression){
    int brackets=0;
    char c;
    while (expression>>c)
    {
        switch (c)
        {
        case '(':
            brackets++;
            break;
        case ')':
        if(brackets)
        brackets--;
        else
        return false;
        default:
            break;
        }
    }
    return brackets==0;
}

int main()
{
    string expression;
    getline(cin,expression);
    istringstream expressionStr(expression);
    if(validExpression(expressionStr)){
        cout<<"correct"<<endl;
    }else{
        cout<<"incorrect"<<endl;
    }
}