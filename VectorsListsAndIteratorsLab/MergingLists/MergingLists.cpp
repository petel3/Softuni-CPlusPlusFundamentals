#include <iostream>
#include <sstream>
#include <vector>
#include <list>
using namespace std;

void readInts(istream & istr, list<int> & dest){
    int i;
    while (istr>>i)
    {
        dest.push_back(i);
    }
}
void readSequence(istream & istr,list<int> & dest){
    string str;
    getline(istr,str);

    istringstream inputStream(str);
    readInts(inputStream,dest);
}

list<int> combineSequences(const list<int> & first,const list<int> & second){
    list<int>::const_iterator
    it1=first.cbegin(),
    it2=second.cbegin();

    list<int>result;

    for(; it1 !=first.cend()&& it2 !=second.cend(); it1++,it2++){
        result.push_back(*it1);
        result.push_back(*it2);
    }

    for(; it1 !=first.cend();it1++)
        result.push_back(*it1);

    for(; it2 !=second.cend();it2++)
        result.push_back(*it2);

    return result;
}

int main()
{
    list<int> first,second;

    readSequence(cin,first);
    readSequence(cin,second);

    list<int> result=combineSequences(first,second);

    for(int i:result){
        cout<<i<<' ';
    }

    cout<<endl;
}