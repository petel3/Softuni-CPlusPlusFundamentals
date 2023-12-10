#include <iostream>
#include <sstream>
#include <list>
#include <vector>

using namespace std;
void printTrain(const vector<string>& train) {
    cout << '|';
    for (const auto& wagon : train) {
        cout << wagon << '|';
    }
    cout << endl;
}

void leaveWagon(vector<string> & train,int pos){
    train.erase(train.begin()+pos-1);
}

void moveWagon(vector<string> & train,int p1,int p2){
    string wagon=train[p1-1];
    train.erase(train.begin()+p1-1);
    train.insert(train.begin()+p2-1,wagon);
}

int main()
{
    vector<string>train;
    string input;
    
    while (true)
    {
        getline(cin,input);
        if(input=="end"){
            break;
        }else if(input=="empty"){
            train.push_back(" ");
        }else{
           train.push_back(input);
        }
    }
    
char command;
while (true)
{
    cin>> command;
    if (command=='E')
    {
        break;
    }else if(command=='P'){
        printTrain(train); 
    }else if(command=='L'){
        int pos;
        cin>>pos;
        leaveWagon(train,pos);
        printTrain(train); 
    }else if(command=='M'){
        int oldPos;
        int newPos;
        cin>>oldPos;
        cin>>newPos;
        moveWagon(train,oldPos,newPos);
        printTrain(train); 
    }
    
}



}