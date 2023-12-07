#include <iostream>
#include <sstream>
#include <list>
using namespace std;

void readInts(istream & istr,list<int> & dest){
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

void doAddCommand(list<int> & theList,int number){
    theList.push_back(number);
}

void doRemoveCommand(list<int> & theList,int number){
    for(list<int>::iterator itF=theList.begin(); itF!=theList.end(); itF++)

        if(*itF==number){
            theList.erase(itF);
            return;
    }
}
list<int>::iterator goToListIndex(list<int>&theList,int index){
    list<int>::iterator itF=theList.begin();

    while(itF!=theList.end()&&index!=0)
    {
        itF++;
        index--; 
    }
    
    return itF;
}
void doRemoveAtCommand(list<int> & theList,int index){
    list<int>::iterator itF=goToListIndex(theList,index);

    if(itF!=theList.end()){
        theList.erase(itF);
    }
}

void doInsertCommand(list<int> & theList,int number,int index){
    list<int>::iterator itF=goToListIndex(theList,index);
    
    theList.insert(itF,number);
}

int main()
{
    list<int> theList;

    readSequence(cin,theList);

    string command;
    while (cin>>command)
    {
        if (command=="end"){
            break;
        }
        int number;
        cin>>number;
        if(command=="Add"){
            doAddCommand(theList,number);
        }
        else if(command=="Remove"){
            doRemoveCommand(theList,number);
        }
        else if(command=="RemoveAt"){
            doRemoveAtCommand(theList,number);
        }
        else if(command=="Insert"){
            int index;
            cin>>index;
            doInsertCommand(theList,number,index);
        }
    }
    for(int i:theList){
        cout<<i<< ' ';
    }
    cout<<endl; 
}