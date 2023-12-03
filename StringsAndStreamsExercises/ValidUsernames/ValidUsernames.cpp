#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool isValidChar(char c){
    return(isalnum(c)|| (c=='-' || c=='_'));
}

bool isValidName(const string & name){
    if(name.length()<3 || name.length()>16)
    return false;

    for (char c:name)
    {
        if(!isValidChar(c))
        return false;
    }

    return true;
}



int main()
{
    string buffer;
    getline(cin,buffer);
    const string divider=", ";

    istringstream istr(buffer);
    while (buffer.length())
    {
       string username;
       int divPos=buffer.find(divider);
       if(divPos!=string::npos){
        username=buffer.substr(0,divPos);
        buffer.erase(0,divPos+divider.length());
       }
       else
       {
        username=buffer;
        buffer.clear();
       }
       
       if (isValidName(username))
       {
        cout<<username<<endl;
       }
    }
    return 0;
    
}