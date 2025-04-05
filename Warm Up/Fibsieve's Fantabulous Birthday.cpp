// Problem link --->
https://lightoj.com/problem/fibsieves-fantabulous-birthday

// Solution 
#include <bits/stdc++.h>
using namespace std;
#define int long long
// Reads two integers and prints their sum
void basicIO() {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
}

signed main() {
    // basicIO();
    // Your cpp code here
    int test; cin >> test;
    
    for (int t = 1; t <= test; t++) {
        int n; cin >> n;
        
        int sq = ceil(sqrt(n));
        int r = sq * sq - n;
        int x, y;
        
        if (r < sq) {
            x = sq;
            y = r + 1;
        } else {
            x = 2 * sq - r - 1;
            y = sq;
        }
        
        if (sq & 1) {
            swap(x, y);
        }
        
        cout << "Case " << t << ": " << x << " " << y << endl;
    }
    return 0;
}
