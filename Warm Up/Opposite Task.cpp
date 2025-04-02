// Problem link ---->
https://lightoj.com/problem/opposite-task

#include <bits/stdc++.h>
using namespace std;

// Reads two integers and prints their sum
void basicIO() {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
}

int main() {
    // basicIO();
    // Your cpp code here
    
    int t; cin >> t;
    
    while (t--) {
        int n; cin >> n;
        
        if (n <= 10) {
            cout << n << " " << 0 << endl;
        } else {
            cout << 10 << " " << n - 10 << endl;
        }
    }
    return 0;
}
