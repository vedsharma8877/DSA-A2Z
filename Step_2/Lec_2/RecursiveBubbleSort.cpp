#include <bits/stdc++.h>
using namespace std;

void recursiveBubbleSort(int arr[], int n)
{
    int didSwap = 0;
    if (n == 1)
        return;
    for (int j = 0; j <= n - 2; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            didSwap = 1;
        }
    }
    if (didSwap == 0)
        return;
    recursiveBubbleSort(arr, n - 1);
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorting: " << "\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    recursiveBubbleSort(arr, n);
    cout << "After sorting: " << "\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}