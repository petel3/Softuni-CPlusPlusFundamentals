#include <iostream>

using namespace std;

const int MAX_SIZE=100;

int main()
{
    size_t counts[10]={};
    int inputSize;
    cin>>inputSize;

    for (int i = 0; i < inputSize; i++)
    {
        int curNumber;
        cin>>curNumber;

        if(curNumber<0 || curNumber>9){
            cout<<"Number out of range. Aborting..." <<endl;
            exit(1);
        }
        counts[curNumber]++;
    }
    size_t maxValue=counts[0];
    for (size_t i = 1; i < 10; i++)
    {
        if(counts[i]>maxValue){
            maxValue=counts[i];
        }
    }
    for (size_t i = 0; i < 10; i++)
    {
        if(counts[i]==maxValue){
            cout<<i<< " ";
        }
    }
    cout<<endl;
}