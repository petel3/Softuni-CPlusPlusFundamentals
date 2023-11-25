#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string input;
    getline(cin,input);

    string numbers;
    string letters;
    string others;
    for(char c:input){
        if(isdigit(c)){
            numbers+=c;
        }else if (isalpha(c))
        {
            letters+=c;
        }else{
            others+=c;
        }
    }
    cout<<numbers<<endl;
    cout<<letters<<endl;
    cout<<others<<endl;
}