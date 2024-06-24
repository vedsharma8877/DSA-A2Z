#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int target) {
    int n = arr.size();
    int low = 0, high = n-1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target) 
            return mid;
        else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr =  {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int targetNumber = binarySearch(arr, target);
    cout << targetNumber << endl;
}