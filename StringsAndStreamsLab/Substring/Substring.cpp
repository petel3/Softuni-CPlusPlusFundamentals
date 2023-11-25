#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string first,sub;
    getline(cin,sub);
    getline(cin,first);

    while (true)
    {
        int pos=first.find(sub);
        if(pos==string::npos){
            break;
        }
        first.erase(pos,sub.size());

    }
    cout<<first<<endl;
}