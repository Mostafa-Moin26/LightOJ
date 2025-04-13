#include <bits/stdc++.h>
using namespace std;

int main() {

// https://lightoj.com/problem/how-cow
    
    int t; cin >> t;
    
    for (int cs = 1; cs <= t; cs++) {
        
        int x1, x2, y1, y2; cin >> x1 >> y1 >> x2 >> y2;
        int q; cin >> q;
        
        cout << "Case " << cs << ":" << endl;
        while (q--) {
            int x, y; cin >> x >> y;
            
            if ((x >= x1 && x <= x2) && (y >= y1 && y <= y2)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
