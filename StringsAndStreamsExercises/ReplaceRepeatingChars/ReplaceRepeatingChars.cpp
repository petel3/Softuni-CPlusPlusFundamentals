#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cin>>input;
    char currentChar=input[0];
    cout<<currentChar;
    for(char c:input){
        if(currentChar!=c){
            cout<<c;
            currentChar=c;
        }
        
    }
}