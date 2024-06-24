#include <bits/stdc++.h>
using namespace std;

void recursiveInsertionSort(int arr[], int i, int n)
{
    if (i == n)
        return;
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
        j--;
    }
    recursiveInsertionSort(arr, i + 1, n);
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorting: " << "\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    recursiveInsertionSort(arr, 0, n);
    cout << "After sorting: " << "\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}