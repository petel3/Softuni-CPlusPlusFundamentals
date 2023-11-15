#include <iostream>

using namespace std;

bool validatePassword(string password, bool& lengthValidation, bool& contentValidation, bool& digitsValidation) {
    contentValidation = true;
    int digitsNumber = 0;
    for (int idx = 0; idx < password.length(); idx++)
    {
        char c = password[idx];
        if (isdigit(c))
        {
            digitsNumber++;
        }
        if (!isalnum(c))
        {
            contentValidation = false;
        }
    }
    digitsValidation = (digitsNumber >= 2);
    lengthValidation = (password.length() >= 6) && (password.length() <= 10);
    return (lengthValidation  && contentValidation  && digitsValidation) ;
}

int main()
{
    string pass;
    cin >> pass;
    bool digitsV, lengthV, contentV;
    if (validatePassword(pass,lengthV,contentV,digitsV))
    {
        cout << "Password is valid" << endl;
    }
    else
    {
        if (!lengthV)
            cout << "Password must be between 6 and 10 characters" << endl; 
        if (!contentV)
            cout << "Password must consist only of letters and digits" << endl; 
        if (!digitsV)
            cout << "Password must have at least 2 digits" << endl;
    }
}
