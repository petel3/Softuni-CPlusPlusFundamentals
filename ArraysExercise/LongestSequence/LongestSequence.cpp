#include <iostream>

using namespace std;

const int MAX_INT = 100;

void enterArray(int arr[],int & size){
    cin>>size;

    if(size>MAX_INT){
        cout<<"Buffer too small. Needded "<<size<<endl;
        exit(1);
    }
    for (size_t i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    int arr[MAX_INT];
    int size;
    enterArray(arr,size);

    size_t seq_length=1;
    int longestElement=arr[0];
    size_t cur_length=1;
    int curLongest=arr[0];

    for (size_t i = 1; i < size; i++)
    {
        if(arr[i]==curLongest){
            cur_length++;
        }else{
            cur_length=1;
            curLongest=arr[i];
        }
        if(cur_length>=seq_length){
            seq_length=cur_length;
            longestElement=curLongest;
        }
    }
    for (size_t i = 0; i < seq_length; i++)
    {
        cout<<longestElement<<" ";
    }
}