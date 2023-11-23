#include <iostream>

using namespace std;

const int MAX_SIZE=100;

void enterArray(int arr[],int size){
    for (size_t i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}
void printArray(int arr[],int & size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

int main()
{
    int arr[MAX_SIZE];
    int actualSize;
    cin>>actualSize;
    enterArray(arr,actualSize);

    int rotations;
    cin>>rotations;
    
    for(int i=0;i<rotations;i++){
        int theFirst=arr[0];
        for(int rotCnt=1;rotCnt<actualSize;rotCnt++)
            arr[rotCnt-1]=arr[rotCnt];
        arr[actualSize-1]=theFirst;
        

    }
    printArray(arr,actualSize);
}