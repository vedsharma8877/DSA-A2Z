#include <bits/stdc++.h>
using namespace std;

int searchInsertPosition(vector<int> &arr, int target) {
    int low = 0, high = arr.size() - 1;
    int ans = 0;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target) {
            ans = mid;
            low = mid + 1;
        }
        else {
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1,2,4,7};
    int target = 6;
    int ans = searchInsertPosition(arr, target);
    cout << ans << endl;
}