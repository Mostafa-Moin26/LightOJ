#include <bits/stdc++.h>
using namespace std;


int main() {
    
    // https://lightoj.com/problem/array-simulation
    
    int t; cin >> t;
    
    for (int cs = 1; cs <= t; cs++) {
        
        int n, m; cin >> n >> m;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        while (m--) {
            char op; cin >> op;
                
                if (op == 'S') {
                    int d; cin >> d;
                    for (int i = 0; i < n; i++) {
                        a[i] += d;
                    }
                } else if (op == 'M') {
                    int d; cin >> d;
                    for (int i = 0; i < n; i++) {
                        a[i] *= d;
                    }
                } else if (op == 'D') {
                    int k; cin >> k;
                    for (int i = 0; i < n; i++) {
                        a[i] /= k;
                    }
                } else if (op == 'P') {
                    int y, z; cin >> y >> z;
                    swap(a[y], a[z]);
                } else {
                    reverse(a.begin(), a.end());
                }
        }
        
        cout << "Case " << cs << ":" << endl;
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
