#include <iostream>

using namespace std;

const int MAX_SIZE=100;

void enterArray(int arr[],int size){
    for (size_t i = 0; i < size; i++)
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
    for (int i = 0; i < actualSize; i++)
    {
        for (int j = 0; j < actualSize; j++)
        {
            cout<<arr[i]*arr[j]<<' ';
        }
    }
}