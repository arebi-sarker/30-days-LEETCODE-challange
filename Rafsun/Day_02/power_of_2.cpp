// power of 2

#include <iostream>
using namespace std;

// Check if n is a power of 2 using division
bool isPowerOf2(int n) {
    if (n <= 0) return false;
    while (n % 2 == 0) {
        n /= 2;
    }
    return n == 1;
}

// Find the next power of 2 greater than or equal to n using math
int nextPowerOf2(int n) {
    if (n < 1) return 1;
    int power = 1;
    while (power < n) {
        power *= 2;
    }
    return power;
}

int main() {
    int num = 18;
    cout << num << " is power of 2? " << (isPowerOf2(num) ? "Yes" : "No") << endl;
    cout << "Next power of 2 for " << num << " is " << nextPowerOf2(num) << endl;
    return 0;
}