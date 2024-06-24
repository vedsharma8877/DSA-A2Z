#include <iostream>
using namespace std;
int factorial(int n) {
    int ans = 1;
    for(int i = 1; i <= n; i++) {
        ans *= i;
    }
    return ans;
}

int main() {
    int n = 5;
    int result = factorial(n);
    cout << "The factorial of " << n << " is " << result << endl;
}