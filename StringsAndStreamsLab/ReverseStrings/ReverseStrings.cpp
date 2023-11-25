#include <iostream>
#include <sstream>

using namespace std;

void reverseString(const string & input,ostream & ostr){
    size_t i = input.length()-1;
    for(;;){
        ostr<<input[i];
        if (i)
        {
           i--;
        }
        else{
            break;
        }
        
    }
    
}

int main()
{
    string input;
   ostringstream result;
    while (true)
    {
        cin>>input;
        if (input=="end")
        {
            break;
        }
        result<<input<< " = ";
        reverseString(input,result);
        result<<endl;
        
    }
    cout<<result.str();
}