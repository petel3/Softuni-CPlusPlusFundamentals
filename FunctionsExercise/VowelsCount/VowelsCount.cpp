#include <iostream>

using namespace std;

int countVowels(string text) {
	int counter = 0;
	
	for (int i = 0; i < text.length(); i++)
	{
		char ch = tolower(text[i]);
		if (ch == 'a')
			counter++;
		else if (ch == 'e')
			counter++;
		else if (ch == 'o')
			counter++;
		else if (ch == 'u')
			counter++;
		else if (ch == 'y')
			counter++;
		else if (ch == 'i')
			counter++;
	}
	return counter;
}

int main()
{
    string text;
    cin >> text;
	cout << countVowels(text) << endl;
}
