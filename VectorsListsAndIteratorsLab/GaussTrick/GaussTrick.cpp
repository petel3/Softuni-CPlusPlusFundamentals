#include <iostream>
#include <sstream>
#include <vector>
#include <list>

using namespace std;

void readInputs(istream & istr, vector<int> & dest){
    int i;
    while (istr>>i)
    {
        dest.push_back(i);
    }
    
}

int main()
{
    string str;
    getline(cin,str);
    istringstream input(str);
    vector<int> numbers;
    readInputs(input,numbers);

    int from=0, to=numbers.size()-1;

    list<int> result;
    for(;from<=to; from++,to--){
        if(from!=to){
            result.push_back(numbers[from]+numbers[to]);
        }
        else{
            result.push_back(numbers[from]);
        }
    }
    for (list<int>::iterator it=result.begin(); it!=result.end();it++)
    {
        cout<<*it<< ' ';
    }
    cout<<endl;
}