#include <iostream>
#include <string>
#include<sstream>
using namespace std;

string capitalizeString(const string & input){
    ostringstream oStr;

    bool capitalize=true;
    string output;
    for (size_t idx = 0; idx < input.length(); idx++)
    {
        char c =input[idx];
        bool isSmallLetter=(c>='a' && c<='z');
        bool isCapitalLetter=(c>='A' && c<='Z');
        if (isSmallLetter || isCapitalLetter)
        {
            if(capitalize){
                if(isSmallLetter){
                    c-=32;
                
                }
                capitalize=false;
            } 
        }
        else{
            capitalize=true; 
        }
        output+=c;
        oStr<<c;
    }
    return oStr.str();
}

int main()
{
   string input;
   getline(cin,input);
   cout<<capitalizeString(input)<<endl; 
}