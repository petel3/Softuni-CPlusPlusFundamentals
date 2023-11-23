#include <iostream>
#include <climits>

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

    int difference;
    if(actualSize==1){
        difference=0;
    }
    else
    {
        difference=INT_MAX;
    }

    enterArray(arr,actualSize);

    for (int i = 0; i < actualSize; i++){
        for (int j = i+1; j < actualSize; j++)
        {
            int miniDiff=abs(arr[i] - arr[j]);
        if(miniDiff<difference){
            difference=miniDiff;
        }
        }
    }
    cout<<difference;
}