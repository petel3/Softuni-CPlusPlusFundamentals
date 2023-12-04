#include <iostream>
#include <list>
#include <sstream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    cin.ignore();

    list<string> products;
    for (int i = 0; i < N; i++)
    {
        string product;
        getline(cin,product);
        products.push_back(product);
    }
    products.sort();
    int idx=1;
    list<string>::iterator it=products.begin();
    for (; it!=products.end();it++,idx++)
    {
        cout<<idx<< "."<<*it<<endl;
    }
    
}