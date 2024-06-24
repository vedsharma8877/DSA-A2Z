#include <bits/stdc++.h>
using namespace std;

int findFloor(vector<int> &arr, int target) {
    int low = 0, high = arr.size() - 1, ans = -1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] <= target) {
            ans = arr[mid];
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int findCeil(vector<int> &arr, int target) {
    int low = 0, high = arr.size() - 1, ans = -1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] >= target) {
            ans = arr[mid];
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &arr, int target) {
    int f = findFloor(arr, target);
    int c = findCeil(arr, target);
    return make_pair(f, c);
}

int main() {
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int target = 5;
    pair<int, int> ans = getFloorAndCeil(arr, target);
    cout << "The floor and ceil values are " << ans.first << " " << ans.second << endl;
    return 0;
}
