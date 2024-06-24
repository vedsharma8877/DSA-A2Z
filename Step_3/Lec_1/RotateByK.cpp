#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr, int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateByK(vector<int> &arr, int n, int k)
{
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    int n = arr.size();
    rotateByK(arr, n, k);
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    cout << endl;
}