#include <iostream>

using namespace std;

const int MAX_SIZE=99;

void readArray(int arr[],int actualSize){
    for (int i = 0; i < actualSize; i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];
    int actualSize;
    cin>>actualSize;

    readArray(arr1,actualSize);
    readArray(arr2,actualSize);

    int arrSum=0;

    for (int i = 0; i < actualSize; i++)
    {
        int number=arr1[i];
        if (number!=arr2[i])
        {
            cout<<"Arrays are not identical. Found difference at "<<i<<"index."<<endl;
            return 0;   
        }
        arrSum+=number;
    }
    cout<<"Arrays are identical. Sum: "<<arrSum<<endl;
}