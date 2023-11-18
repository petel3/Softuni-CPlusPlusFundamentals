#include <iostream>

using namespace std;

const int MAX_SIZE=99;

void reversedArray(string arr[],int size){
    int half=size/2;
    for(int i=0;i<half;i++){
        string a=arr[i];
        string b=arr[size-1-i];

        arr[i]=b;
        arr[size-1-i]=a;
    }
}

int main()
{
    string arr[MAX_SIZE];
    int currentSize;
    cin>>currentSize;
    for(int i=0;i<currentSize;i++){
        cin>>arr[i];
    }
    reversedArray(arr,currentSize);
    for(string current:arr){
        cout<<current<<' ';
    }

}