#include <bits/stdc++.h>
using namespace std;

void rotateArrayByOne(vector<int> &arr)
{
    if (arr.size() == 1)
        return;
    int zeroth = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[arr.size() - 1] = zeroth;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    rotateArrayByOne(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}