#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    cout << endl;
    int maxElement = arr[0];
    for(int i = 0; i < n-1; i++) {
        if(maxElement < arr[i])
            maxElement = arr[i];
    }
    cout << "Largest Element is " << maxElement << " "<< endl;
    return 0;
}