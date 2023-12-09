#include <iostream>
#include <sstream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    int num;
    cin>>num;

    vector<int> numbers;
    numbers.reserve(num);
    int average=0;

    for (size_t i = 0; i < num; i++)
    {
        int n;
        cin>>n;
        average+=n;
        numbers.push_back(n);
    }
    average/=num;

    int idx=0,oddPos=0,evenPos=0;

    for(vector<int>::iterator it=numbers.begin(); it!=numbers.end();it++,idx++){
        if(*it<=average){
            if(idx%2==0)
                evenPos+=*it;
            else{
                oddPos+=*it;
            }  
        }
    }
    cout<<oddPos*evenPos<<endl;
}