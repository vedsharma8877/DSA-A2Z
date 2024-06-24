#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr, int n, int item)
{
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == item)
            index = i;
    }
    return index;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int item = 2;
    cout << "Element found at index " << linearSearch(arr, n, item) << endl;
}