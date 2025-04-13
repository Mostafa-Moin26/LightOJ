#include <bits/stdc++.h>
using namespace std;

int main() {
    
// https://lightoj.com/problem/lift
    
    int t; cin >> t;
    
    for (int cs = 1; cs <= t; cs++) {
        
        int my_pos, lift_pos; cin >> my_pos >> lift_pos;
        
        int time = 19;
        
        if (my_pos > lift_pos) {
            
            time += (my_pos - lift_pos + my_pos) * 4;
        } else {
            time += lift_pos * 4;
        }
        
        cout << "Case " << cs << ": " << time << endl;
    }
    return 0;
}
