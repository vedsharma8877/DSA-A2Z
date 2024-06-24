// #include<bits/stdc++.h>
// using namespace std;

// void getElements(int arr[], int n) {
//     if(n == 1) {
//         cout << -1 << " " << -1 << endl;
//     }
//     int small = INT_MAX, secondSmall = INT_MAX;
//     int large = INT_MIN, secondLarge = INT_MIN;
//     for(int i = 0; i < n; i++) {
//         small = min(small, arr[i]);
//         large = max(large, arr[i]);
//     }
//     for(int i = 0; i < n; i++) {
//         if(arr[i] < secondSmall && arr[i] != small)
//             secondSmall = arr[i];
//         if(arr[i] > secondLarge && arr[i] != large)
//             secondLarge = arr[i];
//     }
//     cout << "Smallest Element is: " << small << endl;
//     cout << "Largest Element is: " << large << endl;
//     cout << "Second Smallest Element is: " << secondSmall << endl;
//     cout << "Second Largest Element is: " << secondLarge << endl;
// }

// int main() {
//     int arr[]={1,2,4,6,7,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     getElements(arr, n);
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[], int n)
{
    int small = INT_MAX, secondSmall = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            secondSmall = small;
            small = arr[i];
        }
        else if (arr[i] < secondSmall && arr[i] != small)
        {
            secondSmall = arr[i];
        }
    }
    return secondSmall;
}

int secondLargest(int arr[], int n)
{
    int large = INT_MIN, secondLarge = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            secondLarge = large;
            large = arr[i];
        }
        else if (arr[i] > secondLarge && arr[i] != large)
        {
            secondLarge = arr[i];
        }
    }
    return secondLarge;
}

int main()
{
    int arr[] = {1, 2, 4, 7, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sS = secondSmallest(arr, n);
    int sL = secondLargest(arr, n);
    cout << "Second Smallest is: " << sS << endl;
    cout << "Second Largest is: " << sL << endl;
    return 0;
}