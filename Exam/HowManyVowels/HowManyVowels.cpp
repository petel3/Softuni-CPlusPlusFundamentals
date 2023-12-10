#include <iostream>
#include <sstream>
#include <list>
#include <vector>

using namespace std;

bool isVowels(char ch){
    if(ch=='a'||ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='y'){
        return true;
    }else{
        return false;
    }
}

int main()
{
    vector<char> characters;
    int n;
    cin>>n;

    int vowelsCount=0,nonVowelsVount=0;
    characters.reserve(n);

    for (size_t i = 0; i < n; i++)
    {
        char ch;
        cin>>ch;
        characters.push_back(ch);
    }

    for(vector<char>::iterator it=characters.begin();it!=characters.end();it++){
        if(isVowels(tolower(*it))){
            vowelsCount++;
        }else if(isalpha(*it)){
            nonVowelsVount++;
        }
    }
    
    cout<<vowelsCount<<' '<<nonVowelsVount<<endl;
}