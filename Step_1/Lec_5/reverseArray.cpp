#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    cout << "Reversed Array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

void reverseArray(int arr[], int n)
{
    int p1 = 0, p2 = n - 1;
    while (p1 < p2)
    {
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
    printArray(arr, n);
}

int main()
{
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    reverseArray(arr, n);
}