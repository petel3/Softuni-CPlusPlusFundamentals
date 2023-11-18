#include <iostream>
#include <string>

using namespace std;

void compareInts(int n1, int n2) {
	if (n1>n2)
	{
		cout << n1;
	}
	else
	{
		cout << n2;
	}
}

void compareChars(char ch1, char ch2) {
	if (ch1>ch2)
	{
		cout << ch1;
	}
	else
	{
		cout << ch2;
	}
}

void compareStrings(string str1, string str2) {
	if (str1>str2)
	{
		cout << str1;
	}
	else
	{
		cout << str2;
	}
}

int main()
{
    string type;
    cin >> type;
	if (type=="int")
	{
		int n1, n2;
		cin >> n1 >> n2;
		compareInts(n1,n2);
	}
	else if (type=="char")
	{
		char ch1, ch2;
		cin >> ch1 >> ch2;
		compareChars(ch1,ch2);
	}
	else if (type=="string")
	{
		string str1, str2;
		cin.ignore();
		getline(cin, str1);
		getline(cin, str2);
		compareStrings(str1,str2);
	}
}
