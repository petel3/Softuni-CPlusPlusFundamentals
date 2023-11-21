#include <iostream>

using namespace std;

const int MAX_SIZE=100;

int AverageNumber(int arr[],int size){
    int result=0;
    for(int i=0;i<size; i++){
        result+=arr[i];
    }
    return result/size;
}

void aboveAverageNumber(int arr[],int size,int averageNum){
    for(int i=0;i<size; i++){
        if(arr[i]>=averageNum){
            cout<<arr[i]<< " ";
        }
    }
}

int main()
{
  int arr[MAX_SIZE];

  int n;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }  
  int averageNum=AverageNumber(arr,n);
    aboveAverageNumber(arr,n,averageNum);
}