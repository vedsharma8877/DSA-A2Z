#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int target) {
    int n = arr.size();
    int low = 0, high = n-1;
    int ans = 0;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] >= target) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans + 1;
}

int main() {
    vector<int> arr = {3,5,8,9,15,19};
    int target = 9;
    int count = upperBound(arr, target);
    cout << count << endl;
}