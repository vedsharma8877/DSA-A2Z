#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int target) {
    int n = arr.size();
    int low = 0, high = n-1;
    int count = 0;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target)
            count =  (mid-low);
        else if(arr[mid] > target)
            count = (mid-1);
        else
            count = (mid+1);
    }
    return count;
}

int main() {
    vector<int> arr = {3,5,8,15,19};
    int target = 9;
    int count = lowerBound(arr, target);
    cout << count << endl;
}