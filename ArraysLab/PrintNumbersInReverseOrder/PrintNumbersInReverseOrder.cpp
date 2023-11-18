#include <iostream>

using namespace std;

const int MAX_SIZE = 99;

int main()
{
    int arr[MAX_SIZE];
    int n;
    cin >> n;
   for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
