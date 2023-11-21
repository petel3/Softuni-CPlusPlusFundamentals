#include <iostream>

using namespace std;

#define MAX_SIZE 100

void printArray(int arr[], int size, string separator = " ") {
    for (int i = 0; i < size; i++)
        cout << arr[i] << separator;
    cout << endl;
}

int main()
{

    int actualSize;
    cin >> actualSize;

    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];

    int* first = arr1;
    int* second = arr2;

    for (int i = 0; i < actualSize; i++)
    {
        int a, b;
        cin >> a >> b;

        first[i]=a;
        second[i]=b;

        int* temp = first;
        first = second;
        second = temp;
       
    }
    printArray(first, actualSize);
    printArray(second, actualSize);

}