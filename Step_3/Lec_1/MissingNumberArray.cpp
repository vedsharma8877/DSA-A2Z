#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr, int n)
{
    int sum = (n * (n+1)) / 2;
    int s2 = 0;
    for(int i = 0; i < n - 1; i++) 
        s2 += arr[i];
    return (sum - s2);
}

int main()
{
    vector<int> arr = {1, 2, 4, 5};
    int n = 5;
    int num = missingNumber(arr, n);
    cout << num << endl;
}