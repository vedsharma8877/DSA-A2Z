#include <bits/stdc++.h>
using namespace std;

vector<int> unionOfSortedArrays(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size(), m = arr2.size();
    int i = 0, j = 0;
    vector<int> Union;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (Union.size() == 0 || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }
        else
        {
            if (Union.size() == 0 || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n)
    {
        if (Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }
    while (j < m)
    {
        if (Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> arr2 = {2, 3, 4, 4, 5, 11, 12};
    vector<int> Union = unionOfSortedArrays(arr1, arr2);
    cout << "Union of arr1 and arr2 is  " << endl;
    for (auto &val : Union)
        cout << val << " ";
    cout << endl;
    return 0;
}