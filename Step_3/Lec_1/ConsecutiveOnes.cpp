#include <bits/stdc++.h>
using namespace std;

void consecutiveOnes(vector<int> &arr, int n) {
    int count = 0, maxi = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 1)
            count++;
        else 
            count = 0;
        maxi = max(maxi, count);
    }
    cout << maxi << endl;
}

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1};
    int n = arr.size();
    consecutiveOnes(arr, n);
}