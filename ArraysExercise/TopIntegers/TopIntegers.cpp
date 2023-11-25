#include <iostream>

using namespace std;

const int MAX_SIZE=100;

void enterArray(int arr[],int & size){
    
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}

bool isTopInteger(int number,int arr[],int arrSize,int startFrom=0){
    
    for (int i = startFrom; i < arrSize; i++)
    {
        if (number<=arr[i]){
            return false;
        }
        return true;
    }
}

int main()
{
    int arr[MAX_SIZE];
    int arrSize;
    cin>>arrSize;
    enterArray(arr,arrSize);
    for (int i = 0; i < arrSize; i++)
    {
        if(isTopInteger(arr[i],arr,arrSize,i+1)){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}