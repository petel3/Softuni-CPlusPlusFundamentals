#include <iostream>
#include <sstream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    list<int> result;
    list<int>numbers;
    int n;
    cin>>n;
    int average=0;
    
    for (size_t i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        average+=num;
        numbers.push_back(num);
    }
    average/=n;
    
    for(list<int>::iterator it=numbers.begin();it!=numbers.end();it++){
        if(*it<average && *it%2==0){
            result.push_back(*it);
        }
       
    }
    if (result.size()==0)
    {
        cout<<"No"<<endl;
    }else{

        result.sort();
        result.reverse();
        for(list<int>::iterator it=result.begin();it!=result.end();it++){
            cout<<*it<<' ';
           
    }
    cout<<endl;
    }
    
    
}