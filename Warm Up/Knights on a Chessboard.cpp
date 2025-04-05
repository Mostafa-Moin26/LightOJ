// Problem link --->
https://lightoj.com/problem/knights-on-chessboard

// Solution 
#include <iostream>
using namespace std;

int main() {
    int t, cs = 1;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        int res;
        
        if (m == 1 || n == 1) {
            res = m * n;
        } else if (m == 2 || n == 2) {
            int x = max(m, n);
            res = (x / 4) * 4 + min(4, (x % 4) * 2);
        } else {
            res = (m * n + 1) / 2;
        }
        
        cout << "Case " << cs++ << ": " << res << "\n";
    }
    return 0;
}
