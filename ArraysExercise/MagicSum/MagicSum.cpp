#include <iostream>

using namespace std;

const int MAX_SIZE=100;

void enterArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    int arr[MAX_SIZE];
    int actualSize;
    cin>>actualSize;
    enterArray(arr,actualSize);

    int magicSum;
    cin>>magicSum;

    for (int i = 0; i < actualSize; i++)
    {
       for (int j = i+1; j < actualSize; j++)
       {
        if(arr[i]+arr[j]==magicSum){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
       } 
    }
}