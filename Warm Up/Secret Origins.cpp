// Problem link ----->
https://lightoj.com/problem/secret-origins

#include <bits/stdc++.h>
using namespace std;

// Returns the next higher number greater than 'n' with the same number of set bits (1s)
unsigned int nextHigherSamePopcount(unsigned int n) {
    unsigned int c = n;
    unsigned int c0 = 0, c1 = 0;

    // Count trailing 0s (c0)
    while ((c & 1) == 0 && c != 0) {
        c0++;
        c >>= 1;
    }

    // Count 1s right after the trailing 0s (c1)
    while ((c & 1) == 1) {
        c1++;
        c >>= 1;
    }

    // If all bits are 1s followed by 0s (like 111000) and there's no higher with same popcount
    if (c0 + c1 == 31 || c0 + c1 == 0)
        return -1;

    // Position of rightmost non-trailing 0 (we'll flip this)
    int p = c0 + c1;

    // Step 1: Flip rightmost non-trailing 0
    n |= (1 << p);

    // Step 2: Clear all bits to the right of position p
    n &= ~((1 << p) - 1);

    // Step 3: Insert (c1-1) ones at the rightmost positions
    n |= (1 << (c1 - 1)) - 1;

    return n;
}

int main() {
    int test;
    cin >> test;

    for (int t = 1; t <= test; t++) {
        unsigned int n;
        cin >> n;

        // Call the function to get the result
        unsigned int res = nextHigherSamePopcount(n);

        // Print the result in required format
        cout << "Case " << t << ": " << res << endl;
    }
    return 0;
}
